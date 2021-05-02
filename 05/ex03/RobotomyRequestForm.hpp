#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string			_target;
	static std::string	_tree;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);
	class  CantOpenFileException: public std::exception
    {
        virtual const char *what() const throw();
    };
	class  WriteException: public std::exception
    {
        virtual const char *what() const throw();
    };
    void    execute(Bureaucrat const & executor) const;

};


#endif