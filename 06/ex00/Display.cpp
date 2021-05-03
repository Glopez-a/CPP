#include "Display.hpp"

void	parse(std::string src)
{
	if (isChar(src))
		fromChar(src[0]);
	else if (isInt(src))
		fromInt(atoi(src.c_str()));
	else if (isDouble(src))
		fromDouble(atof(src.c_str()));
	else if (isFloat(src))
		fromDouble(atof(src.c_str()));
	else if (isNaN(src))
		fromNaN(src);
	else
		noValid();
}

void	fromChar(char src)
{
	std::cout << "char: '" << src << "'\n";
	std::cout << "int: " << (int)src << std::endl;
	std::cout << "float: " << (int)src << ".0\n";
	std::cout << "int: " << (int)src << ".0f\n";
}

void	fromInt(int	src)
{
	if (src <= 31 || src >= 127)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << (char)src << "'\n";
	std::cout << "int: " << src << std::endl;
	std::cout << "float: " << src << ".0\n";
	std::cout << "int: " << src << ".0f\n";
}

void	fromDouble(float src)
{
	int	x = static_cast<int>(src);
	if (x <= 31 || x >= 127)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << (char)src << "'\n";
	std::cout << "int: " << x << std::endl;
	std::cout << "float: " << src << "\n";
	std::cout << "int: " << src << "f\n";
}

void	fromNaN(std::string src)
{
	int	i = 0;
	while (src[i])
		i++;
	if (src[i - 2] == 'f' && src[i - 1] == 'f' && src != "nanf")
		src[i - 1] = 0;
	std::cout << "char: Impossible\n";
	std::cout << "int: Impossible\n";
	std::cout << "float: " << src << "f\n";
	std::cout << "int: " << src << "\n";
}

void	noValid()
{
	std::cout << "Thats not a valid input\n";
}