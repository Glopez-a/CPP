#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
private:
    std::string _name;
    int         _grade;

public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &other);
    ~Bureaucrat();
    Bureaucrat &operator=(Bureaucrat const &other);
    class GradeTooHighException: public std::exception
    {
		virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        virtual const char* what() const throw();
    };
    std::string const   &getName() const;
    int                 getGrade() const;
    void                increment();
    void                decrement();
};
std::ostream    &operator<<(std::ostream &out, Bureaucrat const &src);

#endif
