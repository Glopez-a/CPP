#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
    std::string const _name;
    bool    _signed;
    int const   _grade_sign;
    int const   _grade_exec;


public:
    Form(std::string name, int grade_sign, int grade_exec);
    Form(Form const &other);
    virtual ~Form();
    Form &operator=(Form const &other);
    class  GradeTooLowException: public std::exception
    {
        virtual const char *what() const throw();
    };
    class  GradeTooHighException: public std::exception
    {
        virtual const char *what() const throw();
    };
    class  FormIsNotSigned: public std::exception
    {
        virtual const char *what() const throw();
    };
    std::string     getName() const;
    int             getSignedGrade() const;
    int             getSignedExec() const;
    bool            getSign() const;
    void            beSigned(Bureaucrat const &bureaucrat);
    virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream    &operator<<(std::ostream &out, Form const &src);

#endif
