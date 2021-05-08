#include <iostream>

template <typename T>
void	iter(T	*s, int x, void (*f)(T &x))
{
	for (int i = 0; i < x; i++)
	{
		f(s[i]);
	}
}

template <typename T>
void	plus(T &t)

{
	t ++;
}

int	main(void)
{
	int	i[3] = {0, 1, 2};
	iter(i, 3, plus);
	std::cout << i[0] << " " << i[1] << " "<< i[2]<< std::endl;
	double	j[3] = {0.1, 1.1, 2.1};
	iter(j, 3, plus);
	std::cout << j[0] << " " << j[1] << " "<< j[2]<< std::endl;
	char q[] = "hol";
	iter(q, 3, plus);
	std::cout << q[0] << " " << q[1] << " "<< q[2]<< std::endl;
}