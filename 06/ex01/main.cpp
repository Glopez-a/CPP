#include <string>
#include <iostream>

struct Data
{
	std::string	s1;
	int			i;
	std::string	s2;
};

void	*serialize()
{
	void			*ptr;
	std::string		random1;
	std::string		random2;
	char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
    char vowels[] = {'a','e','i','o','u','y'};
	int	random3 = rand();
	int random = rand() % 2;
    int count = 0;

    for(int i = 0; i < 8; i++)
    {
        if(random < 2 && count < 2)
        {
            random1 = random1 + consonents[rand() % 19];
            count++;
        }
        else
        {
            random1 = random1 + vowels[rand() % 5];
            count = 0;
        }
        random = rand() % 2;
    }
	for(int i = 0; i < 8; i++)
    {
        if(random < 2 && count < 2)
        {
            random2 = random2 + consonents[rand() % 19];
            count++;
        }
        else
        {
            random2 = random2 + vowels[rand() % 5];
            count = 0;
        }
        random = rand() % 2;
    }

	Data *dat = new Data;
	dat->s1 = random1;
	dat->i = random3;
	dat->s2 = random2;
	ptr = dat;

	return (ptr);
}

Data	*deserialize(void *raw)
{
	Data	*dat;
	dat = reinterpret_cast <Data *>(raw);
	return (dat);
}

int	main(void)
{
	srand(time(NULL));

	void	*ptr;
	Data	*dat;

	ptr = serialize();
	dat = deserialize(ptr);
	std::cout << dat->s1 << std::endl;
	std::cout << dat->i << std::endl;
	std::cout << dat->s2 << std::endl;
	
	delete dat;
}