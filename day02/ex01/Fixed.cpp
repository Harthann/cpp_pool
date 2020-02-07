#include "Fixed.hpp"
#include <iostream>

//#####################
//##	CONSTRUCTOR	###
//#####################

Fixed::Fixed() : fix_point(0)
{}

Fixed::Fixed(const int number) : fix_point(number << this->bits)
{}

Fixed::Fixed(const float number)
{
		this->fix_point = (int) (number * (1 << this->bits));
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{}

//#####################
//##	GET MEMBER	###
//#####################

int		Fixed::getRawBits() const
{
	return (this->fix_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fix_point = raw;
}

int		Fixed::toInt(void) const
{
	return (this->fix_point >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return (((float) this->fix_point) / (1 << this->bits));
}

//#####################
//##	OPERATOR	###
//#####################

Fixed&	Fixed::operator=(const Fixed &base)
{
	fix_point = base.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& a)
{
	out << a.toFloat();
	return (out);
}