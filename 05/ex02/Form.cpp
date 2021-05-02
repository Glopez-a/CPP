#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec):
    _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    if (grade_sign < 1)
        throw Form::GradeTooHighException();
    if (grade_sign > 150)
        throw Form::GradeTooLowException();
    if (grade_exec < 1)
        throw Form::GradeTooHighException();
    if (grade_exec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &other):
    _name(other._name), _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{
    if (_grade_sign < 1)
    {
        std::cout << "Creating Form ";
        throw Form::GradeTooHighException();
    }
    if (_grade_sign > 150)
    {
        std::cout << "Creating Form ";
        throw Form::GradeTooLowException();
    }
    if (_grade_exec < 1)
    {
        std::cout << "Creating Form ";
        throw Form::GradeTooHighException();
    }
    if (_grade_exec > 150)
    {
        std::cout << "Creating Form ";
        throw Form::GradeTooLowException();
    }
}


Form &Form::operator=(Form const &other)
{
    _signed = other._signed;
    return (*this);

}

Form::~Form()
{
}

std::string     Form::getName() const
{
    return (this->_name);
}

int             Form::getSignedGrade() const
{
    return (this->_grade_sign);
}

int             Form::getSignedExec() const
{
    return (this->_grade_exec);
}

bool            Form::getSign() const
{
    return (_signed);
}

void            Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() <= _grade_sign)
    {
        _signed = true;
        bureaucrat.signForm(*this, true);
    }
    else
        bureaucrat.signForm(*this, false);

}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char  *Form::FormIsNotSigned::what() const throw()
{
    return ("Form is not signed");
}

void        Form::execute(Bureaucrat const & executor) const
{
    if (!this->getSign())
        throw Form::FormIsNotSigned();
    if (executor.getGrade() > this->getSignedExec())
    {
        std::cout << "Execution ";
        throw Form::GradeTooLowException();
    }
    
}

std::ostream    &operator<<(std::ostream &out, Form const &src)
{
    if (src.getSign())
        out << src.getName() << " form it is signed, form sign grade "
        << src.getSignedGrade() << ", form execution grade " << src.getSignedExec();
    else
        out << src.getName() << " form it is not signed, form sign grade "
        << src.getSignedGrade() << ", form execution grade " << src.getSignedExec();
    return (out);
}

