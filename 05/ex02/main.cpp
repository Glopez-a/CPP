#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat Juan("Juan", 136);
		ShrubberyCreationForm *arbusto = new ShrubberyCreationForm("hola");
		arbusto->beSigned(Juan);
		arbusto->execute(Juan);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Pedro("Pedro", 43);
		RobotomyRequestForm *arbusto = new RobotomyRequestForm("hola");
		arbusto->beSigned(Pedro);
		arbusto->execute(Pedro);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Miguel("Miguel", 2);
		PresidentialPardonForm *arbusto = new PresidentialPardonForm("hola");
		arbusto->beSigned(Miguel);
		arbusto->execute(Miguel);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

}