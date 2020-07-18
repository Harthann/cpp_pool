#include "span.hpp"

Span::Span(unsigned int size)
{
	this->v = new std::vector<int>;
	this->v->reserve(size);
}

void Span::addNumber(int nb)
{
	if (this->v->size() < this->v->capacity())
		this->v->push_back(nb);
	else
		throw std::exception();
}

void Span::addNumber(int nb, IT start, IT end)
{
	for (IT it = start; it != end; it++)
	{
		if (this->v->size() < this->v->capacity())
		{
			std::cout << *it << std::endl;
			*it = nb;
			std::cout << *it << std::endl;
		}
		else
			throw std::exception();
	}
}

void Span::test()
{
	std::cout << "Size: " << this->v->size() << std::endl;
	std::cout << "Capacity: " << this->v->capacity() << std::endl;
}

std::vector<int>::iterator Span::begin()
{
	return (this->v->begin());
}

std::vector<int>::iterator Span::end()
{
	return (this->v->end());
}

unsigned int Span::shortestSpan()
{
	return (0);
}

unsigned int Span::longestSpan()
{
	return (0);
}