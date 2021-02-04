#include "span.hpp"

Span::Span(size_t size)
{
	srand(time(nullptr));
	this->v.reserve(size);
}


size_t Span::getSize(void) const
{
	return (this->v.size());
}

void Span::addNumber(int nb)
{
	if (this->getSize() < this->v.capacity())
		this->v.push_back(nb);
	else
		throw std::string("Trying to add more number than possible\n");

}

void Span::addNumber(int nb, iterator start, iterator end)
{
	for (iterator it = start; it != end; it++)
	{
		if (this->v.size() < this->v.capacity())
			this->v.push_back(nb);
		else
			throw std::string("Trying to add more number than possible\n");

	}
}

void Span::addNumber(iterator start, iterator end)
{
//	if (end < start)
//		throw std::string("Iterator end lower than iterator start\n");
//	if ((unsigned long)(end - start) > this->v->capacity() - this->v->size())
//		throw std::string("Trying to add more number than possible\n");
	this->v.insert(this->v.end(), start, end);
}

void Span::addRandomNumber(size_t nb)
{
	for (size_t i = 0; i < nb; i++)
	{
		if (this->v.size() < this->v.capacity())
			this->v.push_back(std::rand());
		else
			throw std::string("Trying to add more number than possible\n");
	}
}

void Span::test()
{
	std::cout << "Size: " << this->v.size() << std::endl;
	std::cout << "Capacity: " << this->v.capacity() << std::endl;
}

void Span::print()
{
	for (iterator it = this->begin(); it != this->end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

Span::iterator Span::begin()
{
	return (this->v.begin());
}

Span::iterator Span::end()
{
	return (this->v.end());
}

size_t Span::shortestSpan()
{
	int span;
	int tmp;

	if (this->getSize() == 0 || this->getSize() == 1)
		throw std::string("Not enough number to get a span\n");
	span = -1;
	for (iterator it = this->begin(); it != this->end(); it++)
	{
		for (iterator it2 = it + 1; it2 != this->end(); it2++)
		{
			tmp = abs(*it - *it2);
			if (tmp < span || span == -1)
				span = tmp;
			if (span == 0)
				return (span);
		}
	}
	return (span);
}

size_t Span::longestSpan()
{
	int max;
	int min;

	if (this->getSize() == 0 || this->getSize() == 1)
		throw std::string("Not enough number to get a span\n");
	max = this->v[0];
	min = max;
	for (iterator it = this->begin(); it != this->end(); it++)
	{
		if (*it < min)
			min =  *it;
		else if (*it > max)
			max =  *it;
	}	
	return (max - min);
}
