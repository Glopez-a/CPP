#include "Form.hpp"

Form::Form(std::string name, bool sign, int grade_sign, int grade_exec):
    _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    if (grade_sign < 1)
        throw Form::GradeTooHighException();
    if (grade_sign > 150)
        throw Form::GradeTooLowException();
    _grade_sign = grade_sign;
    if (grade_exec < 1)
        throw Form::GradeTooHighException();
    if (grade_exec > 150)
        throw Form::GradeTooLowException();
    _grade_exec = grade_exec;
}

Form::~Form()
{
}
