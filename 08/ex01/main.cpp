#include "span.hpp"

int	main(void)
{
	span	sp = span(5);
	sp.addNumber(5);
	sp.addNumber(34);
	sp.addNumber(17);
	sp.addNumber(59);
	sp.addNumber(5);


	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
try
{
	sp.addNumber(15);
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}


try
{

	span spi(5);
	std::cout << spi.shortestSpan() << std::endl;
	/* code */
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

}