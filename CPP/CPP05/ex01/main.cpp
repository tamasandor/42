// #include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat Janos("Janos", 7);
	Form all("42Degree", 42, 10);
	try
	{
		Janos.signForm(all);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << all;
	try
	{
		Bureaucrat averageHungarian("Lajos", 12);
		Form randomForm("randomForm", 11, 10);
		averageHungarian.signForm(randomForm);
		std::cout << randomForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}