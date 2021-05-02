#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): 
	Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
	(void)src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	(void)src;
	return (*this);
}


const char  *RobotomyRequestForm::CantOpenFileException::what() const throw()
{
    return ("Cant open file");
}

const char* RobotomyRequestForm::WriteException::what() const throw()
{
	return "RobotomyRequestFormException: Error while writing to the file";
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
    std::cout << "* VRRRRR BZZZZZZ VRRRRRR *" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization is a failure" << std::endl;
}