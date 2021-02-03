#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	
	public:
		Intern();
		Form* makeForm(std::string const&, std::string const&);

		typedef Form* (*createForm)(std::string const&);
		static Form* createRRF(std::string const&); // Robotomy Request Form
		static Form* createPPF(std::string const&); // Presidential Pardon Form
		static Form* createSCF(std::string const&); // Shrubbery Creation Form

	private:
		std::string key[3];
		createForm			value[3];

};




#endif
