#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>

typedef std::vector<int>::iterator IT;

class Span
{
	public:
		Span(unsigned int = 0);

		unsigned int getSize(void) const;
		void addNumber(int);
		void addNumber(int, IT, IT);
		void addNumber(IT, IT);
		void addRandomNumber(unsigned int);
		std::vector<int>::iterator begin();
		std::vector<int>::iterator end();
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void print() const;
		void test();
	private:
		std::vector<int> *v;
};

#endif