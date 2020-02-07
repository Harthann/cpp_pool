#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int		main(void)
{
	Fixed a(0);
	Fixed b(Fixed(10.05f) * Fixed(2));
	const Fixed c(10.0f);
	const Fixed d(Fixed(10.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "a est inferieur a b : " << (a < b) << std::endl;
	std::cout << "a est superieur a b : " << (a > b) << std::endl;
	std::cout << "a est egal a b : " << (a == b) << std::endl;
	std::cout << "a est inferieur ou egal a c : " << (a <= c) << std::endl;
	std::cout << "a est inferieur ou egal a b : " << (a <= b) << std::endl;
	std::cout << "a est superieur ou egal a b : " << (a >= b) << std::endl;
	std::cout << "a est superieur ou egal a c : " << (a >= c) << std::endl;
	std::cout << "a est different de c : " << (a != c) << std::endl;
	std::cout << "a est different de b : " << (a != b) << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << max( c, d) << std::endl;
}