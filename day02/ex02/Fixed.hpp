#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


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

		class Fixed&	operator=(const Fixed &base);

		Fixed			operator++(int);
		Fixed&			operator++();
		Fixed&			operator--(int a);
		Fixed&			operator--();

		float			operator*(const Fixed& op);
		float			operator-(const Fixed& op);
		float			operator+(const Fixed& op);
		float			operator/(const Fixed& op);

		bool			operator==(const Fixed& op) const;
		bool			operator!=(const Fixed& op) const;
		bool			operator<=(const Fixed& op) const;
		bool			operator>=(const Fixed& op) const;
		bool			operator>(const Fixed& op) const;
		bool			operator<(const Fixed& op) const;
	private:
		int fix_point;
		static const int bits = 8;
};

const Fixed&			max(const Fixed& a, const Fixed& b);
std::ostream&	operator<<(std::ostream& out, const Fixed& a);
const Fixed&			min(const Fixed& a, const Fixed& b);

#endif