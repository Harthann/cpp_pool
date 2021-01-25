#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(Fixed const &copy);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		int				toInt(void) const;
		float			toFloat(void) const;

		Fixed&	operator=(const Fixed &base);
	private:
		int fix_point;
		static const int bits = 8;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& a);

#endif
