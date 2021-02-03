#include <iostream>
#include "iter.hpp"


int main(void)
{
	int *array = new int[5];
	float *farray = new float[5];
	char *carray = new char[5];


	std::cout << "===== Test with int array =====\n";
	::iter(array, 5, init);
	::iter(array, 5, print);
	std::cout << std::endl;
	::iter(array, 5, inc);
	::iter(array, 5, print);
	std::cout << std::endl;

	std::cout << "===== Test with char array =====\n";
	::iter(carray, 5, init);
	::iter(carray, 5, print);
	std::cout << std::endl;
	::iter(carray, 5, inc);
	::iter(carray, 5, print);
	std::cout << std::endl;

	
	std::cout << std::endl;std::cout << "===== Test with float array =====\n";
	::iter(farray, 5, init);
	::iter(farray, 5, print);
	std::cout << std::endl;
	::iter(farray, 5, inc);
	::iter(farray, 5, print);
	return (0);
}
