#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try {
		Bureaucrat bob("bob", 138);
		Bureaucrat eric("Eric", 30);
		Bureaucrat sam("Sam", 1);
		Intern *joe = new Intern();

		Form *firstForm = joe->makeForm("shrubbery creation", "home");
		Form *secondForm = joe->makeForm("robotomy request", "Director");
		Form *thirdForm = joe->makeForm("presidential pardon", "Eric");
		std::cout << "===== BOB WITH FIRST FORM =====\n";
		try {
			bob.signForm(*firstForm);
			bob.executeForm(*firstForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl; }
		std::cout << "===== ERIC WITH SECOND FORM =====\n";
		try {
			eric.signForm(*secondForm);
			eric.executeForm(*secondForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl; }
		std::cout << "===== SAM WITH THIRD FORM =====\n";
		try {
			sam.signForm(*thirdForm);
			sam.executeForm(*thirdForm);
		}
		catch (std::exception& e) {
			std::cout << e.what() << std::endl; }
		delete firstForm;
		delete secondForm;
		delete thirdForm;	
		delete joe;

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl; }
	return (0);
}
