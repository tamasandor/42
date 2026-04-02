#include "BitcoinExchange.hpp"
#include <iomanip>

BitcoinExchange::BitcoinExchange()
{
	std::ifstream file;
	file.open("data.csv");
	std::string tempString;
	getline(file, tempString);
	if (tempString.compare("date,exchange_rate"))
		throw std::runtime_error("The database is corrupted and not following the date,exchange_rate format!");
	size_t comma;
	std::string subbedDate;
	double price;
	while(getline(file, tempString))
	{
		comma  = tempString.find(',', 0);
		if (comma == 0 || comma == std::string::npos)
			throw std::runtime_error("The database is corrupted and not following the date,exchange_rate format!");
		subbedDate = tempString.substr(0, comma);
		price = strtod(tempString.substr(comma+1).c_str(), NULL);
		_database.insert(std::pair<std::string, double>(subbedDate, price));
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& original)
{
	if (this != &original)
	{
		this->_database = original._database;
	}
}

const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& original)
{
	if (this != &original)
	{
		this->_database = original._database;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	//clear the map
	_database.clear();
}

void BitcoinExchange::trim(std::string &input)
{
	std::string::size_type posf = input.find_last_not_of(' ');
	input.erase(posf + 1);
	std::string::size_type posl = input.find_first_not_of(' ');
	input.erase(0, posl);
}

void BitcoinExchange::ChangeDB(std::string fileName)
{
	std::ifstream exchangeDB;
	exchangeDB.open(fileName.c_str());
	std::string tempString;
	getline(exchangeDB, tempString);
	if (tempString.compare("date | value"))
		throw std::runtime_error("Incorrect format in the input file, expected: date | value");
	std::map<std::string, double>::iterator it;
	std::stringstream ss;
	size_t delimPos;
	std::string date;
	std::string amount;
	double convertedAmount;
	while (getline(exchangeDB, tempString))
	{
		// std::cout << tempString << '\n';
		ss.str("");
		ss << tempString;
		delimPos = tempString.find("|", 0);
		if (delimPos == std::string::npos)
		{
			std::cerr << "Error: bad input => " << tempString << "\n";
			continue;
		}
		date = tempString.substr(0, delimPos);
		trim(date);
		it = _database.find(date);
		if (it == _database.end())
		{
			std::string::size_type dateDelimPos = date.find('-');
			if (dateDelimPos == std::string::npos || (atoi(date.substr(0, dateDelimPos).c_str()) < 2000 || atoi(date.substr(0, dateDelimPos).c_str()) > 3000))
			{
				std::cerr << "Error: bad input => " << date << "\n";
				continue;
			}
			int nextDateDelimPos = date.find('-', dateDelimPos+1);
			int month = atoi(date.substr(dateDelimPos+1, nextDateDelimPos - dateDelimPos -1).c_str());
			if (month < 1 || month > 12)
			{
				std::cerr << "Error: bad input => " << date << "\n";
				continue;
			}
			int day = atoi(date.substr(nextDateDelimPos+1).c_str());
			if (day < 1 || day > 31)
			{
				std::cerr << "Error: bad input => " << date << "\n";
				continue;
			}
			// now we use lower bound
			it = _database.lower_bound(date);
			if (it == _database.end())
			{
				std::cout << "No data for " << date << "found\n";
				return;
			}
			else if (it != _database.begin())
				it--;
		}
		amount = tempString.substr(delimPos+1);
		trim(amount);
		convertedAmount = strtod(amount.c_str(), NULL);
		if (convertedAmount < 0 || convertedAmount > 1000)
		{
			if (convertedAmount < 0)
				std::cerr << "Error: not a positive number.\n";
			else
				std::cerr << "Error: too large a number.\n";
			continue;
		}
		std::cout << date << " => " << convertedAmount << " = " << (convertedAmount * it->second) << "\n";
	}
	
}