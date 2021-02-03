#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int length, void (&func)(T *))
{
	int tmp;
	tmp = 0;
	while (tmp < length)
	{
		func(array + tmp);
		tmp++;
	}
}

template<typename T>
void inc(T *tmp)
{
	*tmp += 1;
}

template<typename T>
void init(T *array)
{
	*array = 'A';
}

template<typename T>
void print(T* array)
{
	std::cout << *array << " ";
}

#endif
