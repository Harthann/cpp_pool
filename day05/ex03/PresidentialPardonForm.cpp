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
		throw "This form isn't sign yet\n";
	if (executor.getGrade() > this->getExeGrade())
		throw "This bureaucrat's grade is too low for this form\n";
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox.\n";
}