#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const& name, int grade)
{
	if (grade <= 0)
		GradeTooHighException();
	else if (grade > 150)
		GradeTooLowException();
	else {
		this->name = name;
		this->grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& base)
{
	name = base.getName();
	grade = base.getGrade();
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::decrement()
{
	this->grade++;
	if (grade <= 0)
		GradeTooHighException();
	else if (grade > 150)
		GradeTooLowException();
}

void Bureaucrat::increment()
{
	this->grade--;
	if (grade <= 0)
		GradeTooHighException();
	else if (grade > 150)
		GradeTooLowException();
}


void Bureaucrat::signForm(Form f)
{
	if (f.getSignGrade() < this->getGrade())
	{
		std::exception error;
		std::cout << this->getName() << " cannot sign form " << f.getName();
		std::cout << " because his grade is too low\n";
		throw error;
	}
	else
	{
		std::cout << this->getName() << " signs " << f.getName() << std::endl;
	}
}

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& base)
{
	this->name = base.getName();
	this->grade = base.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream  &os, Bureaucrat const& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".\n";
	return (os);
}


void	Bureaucrat::GradeTooHighException()
{
	std::exception error;
	throw error;
}

void	Bureaucrat::GradeTooLowException()
{
	std::exception error;
	throw error;
}