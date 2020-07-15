#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(std::string const&, int);
		Bureaucrat(Bureaucrat const&);
		~Bureaucrat() {};

		std::string getName() const;
		int getGrade() const;
		void decrement();
		void increment();

		void	signForm(class Form);

		Bureaucrat const& operator=(Bureaucrat const&);

		void GradeTooHighException();
		void GradeTooLowException();
	private:
		std::string name;
		int grade;
};

std::ostream & operator<<(std::ostream &, Bureaucrat const&);

#endif