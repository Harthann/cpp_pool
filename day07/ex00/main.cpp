#include <iostream>
#include "whatever.hpp"

int mainexample(void)
{
	int	a = 2;
	int	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}

int main(void)
{
	int a;
	int b;
	double c;
	double d;

	a = 42;
	b = 5;
	c = 56.7;
	d = 3.14;
	std::cout << "===== Testing swap template: =====\n";
	std::cout << "Before swap a is : " << a << std::endl;
	std::cout << "Before swap b is : " << b << std::endl;
	swap<int>(a, b);
	std::cout << "After swap a is : " << a << std::endl;
	std::cout << "After swap b is : " << b << std::endl;
	swap<double>(c, d);
	std::cout << "Before swap c is : " << c << std::endl;
	std::cout << "Before swap d is : " << d << std::endl;
	swap<int>(a, b);
	std::cout << "After swap c is : " << c << std::endl;
	std::cout << "After swap d is : " << d << std::endl;
	
	std::cout << "\n===== Testing min/max template: =====\n";
	std::cout << "Between a and b, the max is: " << max<int>(a, b);
	std::cout << " and the min is: " << min<int>(a, b) << std::endl;
	std::cout << "Between c and d, the max is: " << max<double>(c, d);
	std::cout << " and the min is: " << min<double>(c, d) << std::endl;
	std::cout << "\nHere is the output of main give by 42:\n\n";
	mainexample();
	return (0);
}
