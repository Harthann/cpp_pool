#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
	public:
		Bureaucrat(std::string const& = "Unknown", int const& = 150);
		Bureaucrat(Bureaucrat const&);
		Bureaucrat const& operator=(Bureaucrat const&);
		~Bureaucrat() {};

		std::string const &getName() const;
		int getGrade() const;
		void decrement();
		void increment();
		void signForm(class Form&) const;
		void executeForm(Form const& form);
		struct GradeTooHighException : public std::exception {
			const char * what() const throw() { 
				return ("Bureaucrat::GradeTooHigh");
			};
		};
		struct GradeTooLowException : public std::exception {
			const char * what() const throw() {
				return ("Bureaucrat::GradeTooLow");
			};
		};
	private:
		std::string name;
		int grade;
};

std::ostream & operator<<(std::ostream &, Bureaucrat const&);

#endif
