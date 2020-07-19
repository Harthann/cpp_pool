#include "span.hpp"

Span::Span(unsigned int size)
{
	srand(time(nullptr));
	this->v = new std::vector<int>;
	this->v->reserve(size);
}

void Span::addNumber(int nb)
{
	if (this->v->size() < this->v->capacity())
		this->v->push_back(nb);
	else
		throw std::string("Trying to add more number than possible\n");

}

void Span::addNumber(int nb, IT start, IT end)
{
	for (IT it = start; it != end; it++)
	{
		if (this->v->size() < this->v->capacity())
			this->v->push_back(nb);
		else
			throw std::string("Trying to add more number than possible\n");

	}
}

void Span::addNumber(IT start, IT end)
{
	if (end < start)
		throw std::string("Iterator end lower than iterator start\n");
	if ((unsigned long)(end - start) > this->v->capacity() - this->v->size())
		throw std::string("Trying to add more number than possible\n");
	this->v->insert(this->v->end(), start, end);
}

void Span::addRandomNumber(unsigned int nb)
{
	for (unsigned int i = 0; i < nb; i++)
	{
		if (this->v->size() < this->v->capacity())
			this->v->push_back(std::rand());
		else
			throw std::string("Trying to add more number than possible\n");
	}
}

void Span::test()
{
	std::cout << "Size: " << this->v->size() << std::endl;
	std::cout << "Capacity: " << this->v->capacity() << std::endl;
}

void Span::print() const
{
	for (unsigned int i = 0; i < this->v->size(); i++)
		std::cout << (*this->v)[i] << " ";
	std::cout << std::endl;
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
	int span;
	int tmp;

	if (this->v->size() == 0 || this->v->size() == 1)
		throw std::string("Not enough number to get a span\n");
	span = -1;
	for (unsigned int  i = 0; i < this->v->size(); i++)
	{
		for (unsigned int j = i + 1; j < this->v->size(); j++)
		{
			tmp = abs((*this->v)[i] - (*this->v)[j]);
			if (tmp < span || span == -1)
				span = tmp;
			if (span == 0)
				return (span);
		}
	}
	return (span);
}

unsigned int Span::longestSpan()
{
	int max;
	int min;

	if (this->v->size() == 0 || this->v->size() == 1)
		throw std::string("Not enough number to get a span\n");
	max = (*this->v)[0];
	min = max;
	for (unsigned int i = 0; i < this->v->size(); i++)
	{
		if ((*this->v)[i] < min)
			min =  (*this->v)[i];
		else if ((*this->v)[i] > max)
			max =  (*this->v)[i];
	}	
	return (max - min);
}