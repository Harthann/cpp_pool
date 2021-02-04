#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include "MutantStackIterator.hpp"


template<class T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::reverse_iterator iterator;
		iterator begin();
		iterator end();
	private:
};

//#######################################
//#		MUTANT STACK MEMBER	#
//#######################################

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.rend());
}

#endif
