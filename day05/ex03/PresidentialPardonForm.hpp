#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const&);
		PresidentialPardonForm(PresidentialPardonForm const&);
		PresidentialPardonForm const& operator=(PresidentialPardonForm const&);
		~PresidentialPardonForm() {};

		void execute(Bureaucrat const& executor) const;
};

#endif