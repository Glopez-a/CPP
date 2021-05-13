#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <unistd.h>

int	main()
{
    std::vector<int> vec;
    std::list<int> list;

    vec.push_back(200);
    vec.push_back(-23);
    vec.push_back(99);
    vec.push_back(0);
	vec.push_back(12);
    vec.push_back(0);

    list.push_back(4);
    list.push_back(8115);
    list.push_back(-432);
    list.push_back(156);

	try
	{
		std::vector<int>::iterator it_find_vec = easyfind(vec, 0);
		std::cout << "Search 0 : " << *it_find_vec << std::endl;
		std::cout << "Next of 0 in array is : " << *(++it_find_vec) << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


    try
    {
		std::vector<int>::iterator it_find_vec = easyfind(vec, 0);
        std::cout << "Search 10000 : ";
        it_find_vec = easyfind(vec, 10000);
        std::cout << *it_find_vec << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

	try
	{
    std::list<int>::iterator it_find_list = easyfind(list, 8115);
    std::cout << "Search 8115 : " << *it_find_list << std::endl; 
    std::cout << "Next of 8115 in array is : " << *(++it_find_list) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}