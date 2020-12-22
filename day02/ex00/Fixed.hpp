#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public:
		Fixed(const int number = 0);
		Fixed(const float number);
		Fixed(Fixed const &copy);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		class Fixed&	operator=(const Fixed &base);
	private:
		int fix_point;
		static const int bits = 8;
};

#endif
