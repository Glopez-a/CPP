#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form
{
private:
    std::string const _name;
    bool    _signed;
    int const   _grade_sign;
    int const   _grade_exec;


public:
    Form(std::string name, bool sign, int grade_sign, int grade_exec);
    Form(Form const &other);
    ~Form();
    Form &operator=(Form const &other);
    class  GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw();
    };
    class  GradeTooHighException: public std::exception
    {
        virtual const char *what() const throw();
    };
};

std::ostream    &operator<<(std::ostream &out, Form const &src);

#endif
