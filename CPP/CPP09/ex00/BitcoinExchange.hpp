#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <stdlib.h>
#include <sstream>


class BitcoinExchange {
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& original);
	const BitcoinExchange &operator=(const BitcoinExchange& original);
	void ChangeDB(std::string exchangeDB);
	void trim(std::string &original);
private:
	std::map<std::string, double> _database;
};

#endif