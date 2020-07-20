#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include "MutantStackIterator.hpp"

// template<typename T> class MutantStackIterator;

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef MutantStackIterator<T> iterator;
		iterator begin();
		iterator end();
	private:
};

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	MutantStackIterator<T> const& msi = MutantStackIterator<T>(&this->top());
	return (msi);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	MutantStackIterator<T> const& msi = MutantStackIterator<T>(&this->top() - this->size());
	return (msi);
}


#endif