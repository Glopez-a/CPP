#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>


class ShrubberyCreationForm: public Form
{
private:
	std::string			_target;
	static std::string	_tree;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &src);
	class  CantOpenFileException: public std::exception
    {
        virtual const char *what() const throw();
    };
    void    execute(Bureaucrat const & executor) const;

};


#endif