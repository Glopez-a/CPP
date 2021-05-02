#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
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
