#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template<typename T>
unsigned long int easyfind(T tmp, int nb)
{
	for (unsigned long int i = 0; i < tmp.size(); i++)
	{
		if (tmp[i] == nb)
			return (i);
	}
	throw nb;
}

template<typename T>
void print(T tmp)
{
	for (unsigned long int i = 0; i < tmp.size(); i++)
		std::cout << tmp[i] << " ";
	std::cout << "\n";
}

#endif