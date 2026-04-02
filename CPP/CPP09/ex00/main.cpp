#include <unistd.h>
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: You need to provide a database, storing the different dates and amounts to evaluate!\n";
		return 1;
	}
	if (access(argv[argc-1], R_OK))
	{
		std::cerr << "Error: Could not open file: " << argv[argc-1] << "!\n";
		return 1;
	}
	if (access("data.csv", R_OK))
	{
		std::cerr << "Error: No default database: data.csv in the current folder!\n";
		return 1;
	}
	try
	{
		BitcoinExchange exchange;
		exchange.ChangeDB(argv[argc-1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	// load all the the price change with the string date to a map
	// we can use later this exact same date to look for the price.
	// if the date is not matching probably the line in the provided field is wrong or have to use the closer date
/* 	std::stringstream some;
	some << "2015-11-03,404.5";
	std::string lol;
	some >> lol;
	std::cout << lol << '\n';
		some >> lol;
	std::cout << lol << '\n';
		some >> lol;
	std::cout << lol << '\n'; */

	return 0;
}