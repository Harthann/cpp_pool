#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat bob("bob", 1);
	Bureaucrat john("john", 150);

	std::cout << "=====\tBOB\t=====\n";
	try {
		std::cout << bob;
		bob.increment();
		std::cout << bob;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "=====\tJOHN\t=====\n";
	try {
		std::cout << john;
		john.decrement();
		std::cout << john;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bob;
	std::cout << john;
	std::cout << "=====\tBERNARD\t=====\n";
	try {
		Bureaucrat Bernard("Bernard", -2);
		std::cout << Bernard;
		john.decrement();
		std::cout << Bernard;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
