#include "Intern.hpp"

Intern::Intern()
{
	this->key[0] = "robotomy request";
	this->key[1] = "shrubbery creation";
	this->key[2] = "presidential pardon";
	this->value[0] = Intern::createRRF;
	this->value[1] = Intern::createSCF;
	this->value[2] = Intern::createPPF;
}

Form* Intern::makeForm(std::string const& form, std::string const& target)
{
	for (int i = 0; i < 3; i++)
	{
		if (!form.compare(this->key[i]))
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->value[i](target));
		}
	}
		std::cout << "Intern failed to create form he will be obviously fire\n";
		return (NULL);
}

Form* Intern::createRRF(std::string const& target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::createPPF(std::string const& target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::createSCF(std::string const& target)
{
	return (new ShrubberyCreationForm(target));
}
