#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const& = "Default");
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		ShrubberyCreationForm const& operator=(ShrubberyCreationForm const&);
		~ShrubberyCreationForm() {};

		void execute(Bureaucrat const& executor) const;
};

#endif
