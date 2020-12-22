#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(const int number) : fix_point(number)
{
	std::cout << "Default contructor called\n";
}

Fixed::Fixed(const float number)
{
	this->fix_point = (int)(number * (1 << this->bits));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy contructor called\n";
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->fix_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fix_point = raw;
}

Fixed&	Fixed::operator=(const Fixed &base)
{
	std::cout << "Assignation operator called\n";
	fix_point = base.getRawBits();
	return (*this);
}
