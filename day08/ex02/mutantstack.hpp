#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
// #include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef T* iterator;
		iterator begin();
	private:
		iterator it;
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->it);
}

#endif