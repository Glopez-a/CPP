#include <string>
#include <iostream>
#include "Display.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Invalid number of arguments\n";
	else
		parse(argv[1]);
}