#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		Bureaucrat bob("bob", 1);
		std::cout << bob;
		bob.increment();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
	return (0);
}