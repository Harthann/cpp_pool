#include "Fixed.hpp"

//#####################
//##	CONSTRUCTOR	###
//#####################

Fixed::Fixed() : fix_point(0)
{}

Fixed::Fixed(const int number) : fix_point(number << this->bits)
{}

Fixed::Fixed(const float number)
{
		this->fix_point = roundf(number * (1 << this->bits));
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

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed&	Fixed::operator++()
{
	this->fix_point++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	this->fix_point--;
	return (*this);
}

float	Fixed::operator*(const Fixed& op)
{
	return (this->toFloat() * op.toFloat());
}

float	Fixed::operator/(const Fixed& op)
{
	return (this->toFloat() / op.toFloat());
}

float	Fixed::operator-(const Fixed& op)
{
	return (this->toFloat() - op.toFloat());
}

float	Fixed::operator+(const Fixed& op)
{
	return (this->toFloat() + op.toFloat());
}

bool	Fixed::operator==(const Fixed& op) const
{
	return (this->fix_point == op.getRawBits());
}

bool	Fixed::operator!=(const Fixed& op) const
{
	return (this->fix_point != op.getRawBits());
}

bool	Fixed::operator<=(const Fixed& op) const
{
	return (this->fix_point <= op.getRawBits());
}

bool	Fixed::operator>=(const Fixed& op) const
{
	return (this->fix_point >= op.getRawBits());
}

bool	Fixed::operator>(const Fixed& op) const
{
	return (this->fix_point > op.getRawBits());
}

bool	Fixed::operator<(const Fixed& op) const
{
	return (this->fix_point < op.getRawBits());
}


//#############################################
//##	NON MEMBER OPERATOR	AND FUNCTIONS	###
//#############################################

std::ostream& operator<<(std::ostream& out, const Fixed& a)
{
	out << a.toFloat();
	return (out);
}

Fixed&		max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&		max(const Fixed& a, const Fixed& b)
{
	std::cout << "Const\n";
	if (a > b)
		return (a);
	return (b);
}

Fixed&		min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&		min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}