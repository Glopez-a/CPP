#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat Juan("Juan", 139);
		ShrubberyCreationForm *arbusto = new ShrubberyCreationForm("hola");
		arbusto->beSigned(Juan);
		arbusto->execute(Juan);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}

}