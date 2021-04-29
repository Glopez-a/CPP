#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Juan("Juan", 100);
	std::cout << Juan << std::endl;
	Juan.increment();
	std::cout << Juan << std::endl;
	Juan.decrement();
	std::cout << Juan << std::endl;

    Bureaucrat Pablo("Pablo", 150);
	try
    {
        std::cout << Pablo << std::endl;
	    Pablo.decrement();
	    std::cout << Pablo << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat Jamfrii("jamfrii", 0);
        std::cout << Jamfrii << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat Pedrito("Pedrito", 151);
        std::cout << Pedrito << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}