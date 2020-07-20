#ifndef MUTANTSTACKITERATOR_HPP
# define MUTANTSTACKITERATOR_HPP

#include "mutantstack.hpp"

template <typename T>
class MutantStackIterator
{
	public:
		MutantStackIterator(T* ptr) : ptr(ptr) {};
		MutantStackIterator(MutantStackIterator const& base) { this->ptr = base.getPTR();};
		~MutantStackIterator() {};

		T* getPTR() const;

		bool operator!=(const MutantStackIterator<T>& msi) const;
		MutantStackIterator		operator++(int);
		MutantStackIterator&	operator++();
		MutantStackIterator		operator--(int);
		MutantStackIterator&	operator--();
		T*						operator->();
		T		operator*();
	private:
		T* ptr;
};


//###########################################
//#######	GETTER/MEMBER	TEMPLATES	#####
//###########################################

template<typename T>
T* MutantStackIterator<T>::getPTR() const
{
	return (this->ptr);
}

//###########################################
//#######	OPERATOR	TEMPLATES	#########
//###########################################

template <typename T>
bool MutantStackIterator<T>::operator!=(MutantStackIterator<T> const& msi1) const
{
	return (msi1.getPTR() != this->getPTR());
}

template <typename T>
MutantStackIterator<T>	MutantStackIterator<T>::operator++(int)
{
	MutantStackIterator<T> tmp(*this);
	operator++();
	return (tmp);
}

template <typename T>
MutantStackIterator<T>&	MutantStackIterator<T>::operator++()
{
	this->ptr--;
	return (*this);
}

template <typename T>
MutantStackIterator<T>	MutantStackIterator<T>::operator--(int)
{
	MutantStackIterator<T> tmp(*this);
	operator--();
	return (tmp);
}

template <typename T>
MutantStackIterator<T>&	MutantStackIterator<T>::operator--()
{
	this->ptr++;
	return (*this);
}

template<typename T>
T	MutantStackIterator<T>::operator*()
{
	return (*this->getPTR());
}

template<typename T>
T*	MutantStackIterator<T>::operator->()
{
	return (this->getPTR());
}

#endif