#include "Intern.hpp"

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}

const char  *Intern::FormNotExistException::what() const throw()
{
    return ("Not a valid name");
}

Form	*Intern::makeForm(std::string s1, std::string s2)
{
	if (s1 == "robotomy request")
	{
		RobotomyRequestForm *form = new RobotomyRequestForm(s2);
		return (form);
	}
	else if (s1 == "presidential pardon")
	{
		PresidentialPardonForm *form = new PresidentialPardonForm(s2);
		return (form);
	}
	else if (s1 == "shrubbery creation")
	{
		ShrubberyCreationForm *form = new ShrubberyCreationForm(s2);
		return (form);
	}
	else
		throw Intern::FormNotExistException();
}