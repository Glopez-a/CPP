#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):
    _name(name)
{
    try
    {
        if (grade < 1)
            throw 1;
        if (grade > 150)
            throw 2;
        _grade = grade;
    }
    catch (int ex)
    {
        if (ex == 1)
            Bureaucrat::GradeTooLowException();
        if (ex == 2)
            Bureaucrat::GradeTooHighException();
    }
}

Bureaucrat::~Bureaucrat()
{
}
