
#include "Array.tpp"
#include "Array.cpp"


int	main(void)
{
	Array<int>	two;

	Array<int>	one(5);
	Array<int>	arg(3);



	arg = one;
	arg[2] = 3;
	arg[3] = 4;
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
	Array<double>	dou(6);

	dou[2] = 3.6;
	for (unsigned long i = 0 ; i < dou.size() ; i++)
		std::cout << "[" << dou[i] << "]";
	std::cout << std::endl;
}