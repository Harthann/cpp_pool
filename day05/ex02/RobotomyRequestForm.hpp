#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>
#define nullptr 0

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const&);
		RobotomyRequestForm(RobotomyRequestForm const&);
		RobotomyRequestForm const& operator=(RobotomyRequestForm const&);
		~RobotomyRequestForm() {};

		void execute(Bureaucrat const& executor) const;
};

#endif
