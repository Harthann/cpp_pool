#include "Fixed.hpp"
#include <iostream>

//#####################
//##	CONSTRUCTOR	###
//#####################

Fixed::Fixed() : fix_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int number) : fix_point(number << this->bits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called\n";
	this->fix_point = roundf(number * (1 << this->bits));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

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
	std::cout << "Assignation operator called\n";
	fix_point = base.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& a)
{
	out << a.toFloat();
	return (out);
}