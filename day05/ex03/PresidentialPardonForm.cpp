#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) :
Form("Presidential pardon", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& base)
{
	this->setName(base.getName());
	this->setTarget(base.getTarget());
	this->setSignGrade(base.getSignGrade());
	this->setExeGrade(base.getExeGrade());
	this->setSign(base.getSign());
}

PresidentialPardonForm const& PresidentialPardonForm::operator=(PresidentialPardonForm const& base)
{
	this->setName(base.getName());
	this->setTarget(base.getTarget());
	this->setSignGrade(base.getSignGrade());
	this->setExeGrade(base.getExeGrade());
	this->setSign(base.getSign());
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSign())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getExeGrade())
		throw Form::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
}
