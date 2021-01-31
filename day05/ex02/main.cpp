#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	promot_to_exe(Bureaucrat &bureaucrat, Form &form)
{
	while (1) {
		try {
			bureaucrat.executeForm(form);
			break ;
		}
		catch (std::exception &e) {
			bureaucrat.increment();
		}
	}
}

void	promot_to_sign(Bureaucrat &bureaucrat, Form &form)
{
	while (1) {
		try {
			bureaucrat.signForm(form);
			break ;
		}
		catch (std::exception &e) {
			bureaucrat.increment();
		}
	}
}

int	main(void)
{
	std::cout << "\n===== SHRUBBERY FORM =====\n";
	try {
		Bureaucrat bob("bob", 150);
		ShrubberyCreationForm low_form("home");
		promot_to_sign(bob, low_form);
		promot_to_exe(bob, low_form);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n===== ROBOTOMY FORM =====\n";
	try {
		Bureaucrat bob("bob", 40);
		RobotomyRequestForm form("Director");
		bob.signForm(form);
		form.execute(bob);

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n===== PRESIDENTIAL FORM =====\n";
	try {
		Bureaucrat bob("bob", 5);
		PresidentialPardonForm form(bob.getName());
		bob.signForm(form);
		form.execute(bob);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
