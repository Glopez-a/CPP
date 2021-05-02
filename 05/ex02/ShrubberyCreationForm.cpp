#include "ShrubberyCreationForm.hpp"

std::string	ShrubberyCreationForm::_tree = 
"        .     .  .      +     .      .          .\n" \
"     .       .      .     #       .           .\n" \
"        .      .         ###            .      .      .\n" \
"      .      .   *#:. .:##*##:. .:#*  .      .\n" \
"          .      . *####*###*####*  .\n" \
"       .     *#:.    .:#*###*#:.    .:#*  .        .       .\n" \
"  .             *#########*#########*        .        .\n" \
"        .    *#:.  *####*###*####*  .:#   .       .\n" \
"     .     .  *#######*##*##*#######*                  .\n" \
"                .*##*#####*#####*##*           .      .\n" \
"    .   *#:. ...  .:##*###*###*##:.  ... .:#     .\n" \
"      .     *#######*##*#####*##*#######*      .     .\n" \
"    .    .     *#####*#######*#####*    .      .\n" \
"            .     *      000      *    .     .\n" \
"       .         .   .   000     .        .       .\n" \
".. .. ..................O000O.......................\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): 
	Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
	(void)src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	(void)src;
	return (*this);
}


const char  *ShrubberyCreationForm::CantOpenFileException::what() const throw()
{
    return ("Cant open file");
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
    std::ofstream    my_file;
	my_file.open(_target + "_shrubbery");
	if (!my_file)
		throw CantOpenFileException();
	my_file << _tree;

}