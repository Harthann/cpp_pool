#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) :
Form("Robotomy request", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& base)
{
	this->setName(base.getName());
	this->setTarget(base.getTarget());
	this->setSignGrade(base.getSignGrade());
	this->setExeGrade(base.getExeGrade());
	this->setSign(base.getSign());
}

RobotomyRequestForm const& RobotomyRequestForm::operator=(RobotomyRequestForm const& base)
{
	this->setName(base.getName());
	this->setTarget(base.getTarget());
	this->setSignGrade(base.getSignGrade());
	this->setExeGrade(base.getExeGrade());
	this->setSign(base.getSign());
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSign())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();
	std::srand(std::time(nullptr));
	int random = std::rand();
	std::cout << "*drilling noises*\n";
	if (random % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << "Robotomisation of " << this->getTarget() << " have failed.\n";
}
