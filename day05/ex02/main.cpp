#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try {
		Bureaucrat bob("bob", 137);
		Bureaucrat eric("Eric", 30);
		Bureaucrat sam("Sam", 1);
		ShrubberyCreationForm low_form("home");
		RobotomyRequestForm secondForm("Director");
		PresidentialPardonForm thirdform("Eric");
		bob.signForm(low_form);
		bob.executeForm(low_form);
		eric.signForm(secondForm);
		eric.executeForm(secondForm);
		sam.executeForm(thirdform);
		sam.signForm(thirdform);
		sam.executeForm(thirdform);
	}
	catch (std::exception& e)
	{
		return (0);
	}
	std::cout << "Code successfully executed\n";
	return (0);
}
