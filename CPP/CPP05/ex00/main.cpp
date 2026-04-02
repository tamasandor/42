#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat all("Janos", 42);

	try
	{
		Bureaucrat erroring("Bela", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat erroring("Lionel", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}


	try
	{
		Bureaucrat erroring("Bela", 149);
		erroring.decrease();
		std::cout << erroring;
		erroring.decrease();
		std::cout << erroring;
		erroring.decrease();
		std::cout << erroring;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat another(all);
		another.increase();
		std::cout << another;
		// another.increase();
		// std::cout << another;
		// another.increase();
		// std::cout << another;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << all;
	all.increase();
	std::cout << all;
}