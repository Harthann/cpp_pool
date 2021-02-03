#include "Form.hpp"

Form::Form(std::string const& name, int const& signgrade, int const& exegrade, std::string const& target)
{
	if (signgrade <= 0 || exegrade <= 0)
		throw Form::GradeTooHighException();
	else if (signgrade > 150 || exegrade > 150)
		throw Form::GradeTooLowException();
	else {
		this->name = name;
		this->target = target;
		this->sign = 0;
		this->signgrade = signgrade;
		this->exegrade = exegrade;
	}
}

Form::Form(Form const& base)
{
	this->name = base.getName();
	this->target = base.getTarget();
	this->sign = base.getSign();
	this->signgrade = base.getSignGrade();
	this->exegrade = base.getExeGrade();
}

Form const& Form::operator=(Form const& base)
{
	this->name = base.getName();
	this->target = base.getTarget();
	this->sign = base.getSign();
	this->signgrade = base.getSignGrade();
	this->exegrade = base.getExeGrade();
	return (*this);
}

std::string Form::getName() const
{
	return (this->name);
}

void	Form::setName(std::string const& n)
{
	this->name = n;
}

std::string Form::getTarget() const
{
	return (this->target);
}

void	Form::setTarget(std::string const& t)
{
	this->target = t;
}

bool Form::getSign() const
{
	return (this->sign);
}

void	Form::setSign(bool const &s)
{
	this->sign = s;
}

int Form::getSignGrade() const
{
	return (this->signgrade);
}

void	Form::setSignGrade(int const &sg)
{
	this->signgrade = sg;
}

int Form::getExeGrade() const
{
	return (this->exegrade);
}

void	Form::setExeGrade(int const &eg)
{
	this->exegrade = eg;
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->getSignGrade())
		throw Bureaucrat::GradeTooLowException();
	this->sign = 1;
}

std::ostream& operator<<(std::ostream& os, Form const& f)
{
	os << "Sign : " << f.getName() << " have " << f.getSign();
	os << " in sign. The grade to sign is : " << f.getSignGrade();
	os << " and to execute is : " << f.getExeGrade() << std::endl;
	return (os);
}
