#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>


class Span
{
	public:
		typedef std::vector<int>::iterator iterator;
		typedef std::vector<int>::const_iterator const_iterator;
		
		Span(size_t = 0);

		size_t getSize(void) const;
		void addNumber(int);
		void addNumber(int, iterator, iterator);
		void addNumber(iterator, iterator);
		void addRandomNumber(size_t);
		iterator begin();
		iterator end();
		size_t shortestSpan();
		size_t longestSpan();
		void print() ;
		void test();
	private:
		std::vector<int> v;
};

#endif
