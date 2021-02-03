#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<double> array(5);

	
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << std::endl;
	for (unsigned int i = 0; i < array.size(); i++)
		array[i] = i * 54.7 - (i * 3.3) + 32;
	for (unsigned int i = 0; i < array.size(); i++)
		std::cout << array[i] << std::endl;
	try {
		std::cout << array[array.size() * 2] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
		return (0);
}
