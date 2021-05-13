#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>


template < template < typename , typename> class T>
typename T<int, std::allocator<int> >::iterator    easyfind(T<int, std::allocator<int> > &cont, int n)
{   
    typename T<int, std::allocator<int> >::iterator itpos;
    if ((itpos = std::find(cont.begin(), cont.end(), n)) != cont.end())
        return (itpos);
    else
		throw std::runtime_error(" not founded");
}

#endif
