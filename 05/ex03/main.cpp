#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	srand(time(NULL));

	try
	{
		Bureaucrat Pedro("Pedro", 10);
		Intern Juan;
		Form *form = Juan.makeForm("robotomysdf request", "asdffg");
		Pedro.signForm(*form);
		Pedro.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat David("David", 10);
		Intern Agapito;
		Form *form = Agapito.makeForm("shrubbery creation", "asdffg");
		David.signForm(*form);
		David.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Manuel("Manuel", 1);
		Intern jose;
		Form *form = jose.makeForm("presidential pardon", "asdffg");
		Manuel.signForm(*form);
		Manuel.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
}