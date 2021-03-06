#include "Form.hpp"

Form::Form(std::string const& name, int const& signgrade, int const& exegrade)
{
	if (signgrade <= 0 || exegrade <= 0)
		throw Form::GradeTooHighException();
	else if (signgrade > 150 || exegrade > 150)
		throw Form::GradeTooLowException();
	else {
		this->name = name;
		this->sign = 0;
		this->signgrade = signgrade;
		this->exegrade = exegrade;
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


void	Form::beSigned(Bureaucrat const & b)
{
	try {
		b.signForm(*this);
		this->sign = 1;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		throw Form::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		throw Form::GradeTooHighException();
	}
}

std::ostream& operator<<(std::ostream& os, Form const& f)
{
	os << "Sign : " << f.getName() << " have " << f.getSign();
	os << " in sign. The grade to sign is : " << f.getSignGrade();
	os << " and to execute is : " << f.getExeGrade() << std::endl;
	return (os);
}
