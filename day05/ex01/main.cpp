#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
		Bureaucrat bob("bob", 40);
		Form cofee("cofee", 150, 150);
		std::cout << bob;
		std::cout << cofee;
		bob.increment();
		cofee.beSigned(bob);
		std::cout << cofee;
	}
	catch (std::exception& e)
	{
		// std::cout << e.what() << std::endl;
		return (0);
	}
	std::cout << "Code successfully executed\n";
	return (0);
}