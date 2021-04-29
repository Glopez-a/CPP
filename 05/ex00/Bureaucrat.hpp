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
    Bureaucrat(/* args */);
    Bureaucrat(Bureaucrat const &other);
    ~Bureaucrat();
};

#endif
