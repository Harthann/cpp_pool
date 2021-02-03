#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& base);
		Array const& operator=(Array const& base);
		~Array();

		unsigned int size();

		T& operator[](unsigned int n);
	private:
		T* array;
		unsigned int length;
};


template<typename T>
Array<T>::Array()
{
	this->array = new T();
	this->length = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n]();
	this->length = n;
}

template<typename T>
Array<T>::~Array()
{
	delete this->array;
}

template<typename T>
Array<T>::Array(Array<T> const& base)
{
	this->array = new T[base.size()];
	this->length = base.size();
	for (unsigned int i = 0; i < this->length; i++)
		this[i] = base[i];
}

template<typename T>
Array<T> const& Array<T>::operator=(Array<T> const& base)
{
	this->array = new T[base.size()];
	this->length = base.size();
	for (unsigned int i = 0; i < this->length; i++)
		this[i] = base[i];
	return (*this);
}

template<typename T>
unsigned int Array<T>::size()
{
	return (this->length);
}

template<typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index > this->size())
		throw std::out_of_range("Index out of bound");
	return (this->array[index]);
}

#endif
