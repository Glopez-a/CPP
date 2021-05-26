#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	Form *	makeShrub(std::string target);
	Form *	makeRobot(std::string target);
	Form *	makePres(std::string target);
public:
	Intern(/* args */);
	~Intern();
	class FormNotExistException: public std::exception
    {
        virtual const char* what() const throw();
    };
	Form	*makeForm(std::string, std::string);
};


#endif
