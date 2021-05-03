#include "Display.hpp"

int		isChar(std::string src)
{
	int x = (int)src[0];
	if (src.length() == 1 && ((x > 31 && x < 48) || (x > 57 && x < 127)))
		return (1);
	return (0);
}

int		isInt(std::string src)
{
	int	i = 0;
	while (src[i])
		i++;
	if (src[i - 1] == 'f')
		src[i - 1] = 0;
	i = 0;
	if (src[i] == '+' || src[i] == '-')
		i++;
	while (src[i])
	{
		if (src[i] == '.')
		{
			i++;
			while (src[i] == '0')
				i++;
			if (src[i])
				return (0);
			else
				return (1);
		}
		if (!isdigit(src[i]))
			return (0);
		i++;
	}
	return (1);
}

int		isDouble(std::string src)
{
	int	i = 0;
	int	flag = 0;
	if (src[i] == '+' || src[i] == '-')
		i++;
	while (src[i])
	{
		if (!isdigit(src[i]))
		{
			if (src[i] == '.' && !flag)
				flag = 1;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		isFloat(std::string src)
{
	int	i = 0;
	int	flag = 0;
	int	flag1 = 0;
	if (src[i] == '+' || src[i] == '-')
		i++;
	while (src[i])
	{
		if (src[i] && flag1 == 1)
			return (0);
		if (!isdigit(src[i]))
		{
			if (src[i] == 'f')
				flag1 = 1;
			else if (src[i] == '.' && !flag)
				flag = 1;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		isNaN(std::string src)
{
	if (src == "nan" || src == "nanf" ||
		src == "-inf" || src == "+inf" || 
			src == "-inff" || src == "+inff")
		return (1);
	return (0);	
}
