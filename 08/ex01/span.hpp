#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
# include <algorithm>

class span
{
private:
	int _nbr;
	std::vector<int>	_vec;
public:
	span(unsigned int);
	span(span const &src);
	~span();
	span	&operator=(span const &src);
	void	addNumber(int i);
	int		shortestSpan();
	int		longestSpan();
	std::vector<int>	getVec() const;

};



#endif
