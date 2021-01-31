#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try {
		Bureaucrat bob("bob", 137);
		Bureaucrat eric("Eric", 30);
		Bureaucrat sam("Sam", 1);
		Intern *joe = new Intern();
		
		Form *lowForm = joe->makeForm("shrubbery creation", "home");

		Form *secondForm = joe->makeForm("robotomy request", "Director");
		Form *thirdForm = joe->makeForm("presidential pardon", "Eric");
		bob.signForm(*lowForm);
		bob.executeForm(*lowForm);
		eric.signForm(*secondForm);
		eric.executeForm(*secondForm);
		sam.signForm(*thirdForm);
		sam.executeForm(*thirdForm);
		delete lowForm;
		delete secondForm;
		delete thirdForm;	
		delete joe;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
