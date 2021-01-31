#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "===== SUCCESS TEST =====\n";
	try {
		Bureaucrat bob("bob", 40);
		Form cofee("cofee", 150, 150);
		std::cout << bob;
		std::cout << cofee;
		bob.increment();
		cofee.beSigned(bob);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "===== GRADE TOO LOW TO EXECUTE TEST =====\n";
	try {
		Bureaucrat bob("bob", 40);
		Form print("Printer", 100, 30);
		print.beSigned(bob);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "===== GRADE TOO LOW TO SIGN TEST =====\n";
	try {
		Bureaucrat bob("bob", 105);
		Form print("Printer", 100, 30);
		print.beSigned(bob);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "===== CONSTRUCTOR EXCEPTION TEST ====\n";
	try {
		Form print("Printer", 100, -30);
	}
	catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
