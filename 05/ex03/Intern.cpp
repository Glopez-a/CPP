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

Form *	Intern::makeShrub(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *	Intern::makeRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *	Intern::makePres(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	typedef Form * (Intern::*form_constr) (std::string target);
	Form		*object;
	std::string	forms [3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	form_constr	constr [3] = {&Intern::makeShrub, &Intern::makeRobot, &Intern::makePres};

	for (int i = 0 ; i < 3 ; i++ )
	{
		if (form == forms[i])
		{
			object = (this->*constr[i]) (target);
			std::cout << "Intern creates " << forms[i] << "." << std::endl;
			return (object);
		}
	}
    throw Intern::FormNotExistException();
	return (NULL);
}