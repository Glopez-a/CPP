# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):
    _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
    *this = other;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat  &Bureaucrat::operator=(Bureaucrat const &other)
{
    _name = other._name;
    _grade = other._grade;
    return (*this);
}

std::string const   &Bureaucrat::getName() const
{
    return (_name);
}

int         Bureaucrat::getGrade() const
{
    return (_grade);
}

void        Bureaucrat::increment()
{
    if (_grade < 2)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void        Bureaucrat::decrement()
{
    if (_grade > 149)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

const char  *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

void        Bureaucrat::signForm(Form &form) const
{
    if (_grade <= form.getSignedGrade())
        std::cout << _name << " signs " << form.getName() << std::endl;
    else
        std::cout << _name << " cannot sign " << form.getName() << " because ";
    form.beSigned(*this);
}

void        Bureaucrat::executeForm(Form const &form) const
{
    if (!form.getSign())
        std::cout << form.getName() << " is not signed\n";
    else if (this->getGrade() > form.getSignedExec())
        std::cout << _name << " hasnt enough grade to execute it\n";
    else
    {
        std::cout << _name << " executes " << form.getName() << std::endl;
        form.execute(*this);
    }
}

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &src)
{
    out << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (out);
}
