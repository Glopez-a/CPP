
#include "Array.tpp"
#include "Array.cpp"


int	main(void)
{
	Array<int>	two;


	Array<int>	one(5);
	for (unsigned long i = 0 ; i < one.size() ; i++)
		std::cout << "[" << one[i] << "]";
	std::cout << std::endl;

	Array<int>	arg(3);

	std::cout << one.size() << std::endl;

	arg = one;
	arg[2] = 3;
	arg[3] = 4;
	for (unsigned long i = 0 ; i < one.size() ; i++)
	std::cout << "[" << one[i] << "]";
	std::cout << std::endl;
	two = arg;
	for (unsigned long i = 0 ; i < arg.size() ; i++)
		std::cout << "[" << arg[i] << "]";
	std::cout << std::endl;
	for (unsigned long i = 0 ; i < two.size() ; i++)
		std::cout << "[" << two[i] << "]";
	std::cout << std::endl;

	try
	{
		arg[8] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		arg[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Array<std::string>	dou(6);

	dou[2] = "hola";
	for (unsigned long i = 0 ; i < dou.size() ; i++)
		std::cout << "[" << dou[i] << "]";
	std::cout << std::endl;
}