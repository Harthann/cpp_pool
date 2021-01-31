#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const& = "Unknown", int = 150);
		Bureaucrat(Bureaucrat const&);
		Bureaucrat const& operator=(Bureaucrat const&);
		~Bureaucrat() {};

		std::string getName() const;
		int getGrade() const;
		void decrement();
		void increment();


		struct GradeTooHighException : public std::exception {
			const char * what() const throw() { 
				return ("GradeTooHigh");
			};
		};
		struct GradeTooLowException : public std::exception {
			const char * what() const throw() {
				return ("GradeTooLow");
			};
		};
	private:
		std::string name;
		int grade;
};

std::ostream & operator<<(std::ostream &, Bureaucrat const&);

#endif
