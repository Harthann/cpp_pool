#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const& name, int const& grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

Bureaucrat const& Bureaucrat::operator=(Bureaucrat const& base)
{
	this->name = base.getName();
	this->grade = base.getGrade();
	return (*this);
}

std::string const& Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::decrement()
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::increment()
{
	if (grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::signForm(Form & form) const
{
//	if (this->getGrade() > form.getSignGrade()) {
//		std::cout << "<" << this->getName() << "> cannot signs ";
//		std::cout << "<" << form.getName() << "> because ";
//		std::cout << "<Grade too low to sign>\n";
//		throw Bureaucrat::GradeTooLowException();
//	}
//	if (this->getGrade() > form.getExeGrade()) {
//		std::cout << "<" << this->getName() << "> cannot signs ";
//		std::cout << "<" << form.getName() << "> because ";
//		std::cout << "<Grade too low to execute>\n";
//		throw Bureaucrat::GradeTooLowException();
//	}
	try {
		form.beSigned(*this);
		std::cout << "<" << this->getName() << "> signs ";
		std::cout << "<" << form.getName() << ">\n";
	}
	catch ( std::exception &e) {
		std::cout << "<" << this->getName() << "> cannot signs ";
		std::cout << "<" << form.getName() << "> because ";
		std::cout << "<Grade too low to sign>\n";
		throw e;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try {
		form.execute(*this);
		std::cout << "<" << this->getName() << "> executes ";
		std::cout << "<" << form.getName() << ">.\n";
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << "Bureaucrats grade too low to execute form\n";
		throw e;
	}
	catch (Form::FormNotSignedException &e) {
		std::cout << "Form not signed so it cannot be executed\n";
		throw e;
	}
}

std::ostream& operator<<(std::ostream  &os, Bureaucrat const& b)
{
	os << "<" << b.getName() << ">, bureaucrat grade ";
	os << "<" << b.getGrade() << ">.\n";
	return (os);
}

