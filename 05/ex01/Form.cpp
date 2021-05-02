#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec):
    _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), _signed(false)
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
        throw Form::GradeTooHighException();
    if (_grade_sign > 150)
        throw Form::GradeTooLowException();
    if (_grade_exec < 1)
        throw Form::GradeTooHighException();
    if (_grade_exec > 150)
        throw Form::GradeTooLowException();
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
    }
    else
		throw Form::GradeTooLowException();
}

const char  *Form::GradeTooLowException::what() const throw()
{
    return ("Form grade too low");
}

const char  *Form::GradeTooHighException::what() const throw()
{
    return ("Form grade too high");
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

