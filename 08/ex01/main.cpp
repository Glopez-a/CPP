#include "span.hpp"

int	main(void)
{
	srand(time(NULL));

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

	span spi = span(10000);

	for (int i = 0; i < 10000; i++)
	{
		spi.addNumber(rand() % 100000);
	}

	std::vector<int> vec = spi.getVec();
	for (int i = 0; i < 10000; i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	std::cout << spi.shortestSpan() << std::endl;
	std::cout << spi.longestSpan() << std::endl;


}