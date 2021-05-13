#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form	formu("formulario", 24, 0);
		std::cout << formu << std::endl;
		std::cout << "hola\n";	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Form		formu1("formulario1", 24, 1);
		std::cout << formu1 << std::endl;
		Bureaucrat	mike("Mike", 29);
		formu1.beSigned(mike);
		std::cout << formu1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

	try
	{
		Form		formu2("formulario2", 24, 1);
		std::cout << formu2 << std::endl;
		Bureaucrat	john("John", 10);
		formu2.beSigned(john);
		std::cout << formu2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	return (0);
}