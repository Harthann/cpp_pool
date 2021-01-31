#include "Form.hpp"

Form::Form(std::string const& name, int signgrade, int exegrade, std::string const& target)
{
	if (signgrade <= 0 || exegrade <= 0)
		GradeTooHighException();
	else if (signgrade > 150 || exegrade > 150)
		GradeTooLowException();
	else {
		this->name = name;
		this->sign = 0;
		this->signgrade = signgrade;
		this->exegrade = exegrade;
		this->target = target;
	}
}

Form::Form(Form const& base)
{
	this->name = base.getName();
	this->sign = base.getSign();
	this->signgrade = base.getSignGrade();
	this->exegrade = base.getExeGrade();
}

Form const& Form::operator=(Form const& base)
{
	this->name = base.getName();
	this->sign = base.getSign();
	this->signgrade = base.getSignGrade();
	this->exegrade = base.getExeGrade();
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

std::string Form::getTarget() const
{
	return (this->target);
}

bool Form::getSign() const
{
	return (this->sign);
}

int Form::getSignGrade() const
{
	return (this->signgrade);
}

int Form::getExeGrade() const
{
	return (this->exegrade);
}

void Form::setSign(bool tmp)
{
	this->sign = tmp;
}

void Form::setSignGrade(int tmp)
{
	this->signgrade = tmp;
}

void Form::setExeGrade(int tmp)
{
	this->exegrade = tmp;
}

void Form::setName(std::string const& tmp)
{
	this->name = tmp;
}

void Form::setTarget(std::string const& tmp)
{
	this->target = tmp;
}

void	Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->sign = 1;
	// b.signForm(*this);
}

void	Form::GradeTooHighException()
{
	std::exception error;
	throw error;
}

void	Form::GradeTooLowException()
{
	std::exception error;
	throw error;
}

std::ostream& operator<<(std::ostream& os, Form const& f)
{
	os << "Sign : " << f.getName() << " have " << f.getSign();
	os << " in sign. The grade to sign is : " << f.getSignGrade();
	os << " and to execute is : " << f.getExeGrade() << std::endl;
	return (os);
}