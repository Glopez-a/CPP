#include "Base.hpp"

int	main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 8; i++)
	{
		Base *abc;
		abc = generate();
		identify_from_pointer(abc);
		identify_from_reference(*abc);
	}
}