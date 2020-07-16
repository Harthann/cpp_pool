#include "Intern.hpp"

typedef Form* (*createForm)(std::string const&);
std::map<std::string, createForm> forms_map;

Intern::Intern()
{
	forms_map.insert(std::make_pair("robotomy request", Intern::createRRF));
	forms_map.insert(std::make_pair("shrubbery creation", Intern::createPPF));
	forms_map.insert(std::make_pair("presidential pardon", Intern::createSCF));
}

Form* Intern::makeForm(std::string const& form, std::string const& target)
{
	createForm f = forms_map[form];
	if (!*f)
	{
		std::cout << "Intern failed to create form he will be obviously fire\n";
		return (NULL);
	}
	Form *tmp = (*f)(target);
	std::cout << "Intern creates " << tmp->getName() << std::endl;
	return (tmp);
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