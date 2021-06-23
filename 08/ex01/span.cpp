# include "span.hpp"


span::span(unsigned int i): _nbr(i)
{
}

span::span(span const &src)
{
	*this = src;
}

span::~span()
{
}

span	&span::operator=(span const &src)
{
	_nbr = src._nbr;
	for (int i = 0; i < _nbr; i++)
		_vec.push_back(src._vec[i]);
	return (*this);
}

void	span::addNumber(int i)
{
	if (_vec.size() >= (size_t)_nbr)
		throw std::runtime_error("no space not add anymore numbers");
	_vec.push_back(i);
}

int		span::shortestSpan()
{
	int	low = 2147483647;
	std::vector<int> vec = _vec;
	if (vec.size() < 2)
		throw std::runtime_error("not possible");
	std::sort(vec.begin(), vec.end());
	std::vector<int>::iterator it = vec.begin();
	for (; it != vec.end() - 1; it++)
	{
		if (*(it + 1) - *it < low)
			low = *(it + 1) - *it;
	}
	return (low);
}

int		span::longestSpan()
{
	std::vector<int>	vec = _vec;
	if (vec.size() < 2)
		throw std::runtime_error("not possible");
	std::sort(vec.begin(), vec.end());
	return (*(vec.end() - 1) - *vec.begin());
}

std::vector<int>	span::getVec() const
{
	return (_vec);
}