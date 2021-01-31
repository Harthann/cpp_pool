#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const& name = "Unknown", const int& = 150, const int& = 150, std::string const& target = "Unknown");
		Form(Form const&);
		Form const& operator=(Form const&);
		virtual ~Form() = 0;
		
		std::string getName() const;
		std::string getTarget() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExeGrade() const;

		void	setName(std::string const &);
		void	setTarget(std::string const &);
		void	setSign(bool const&);
		void	setSignGrade(int const&);
		void	setExeGrade(int const&);

		void	beSigned(class Bureaucrat const&);
		
		struct GradeTooHighException : public std::exception {
			const char * what() const throw() {
				return ("Form::GradeTooHigh");
			};
		};
		struct GradeTooLowException : public std::exception {
			const char * what() const throw() {
				return ("Form::GradeTooLow");
			};
		};
		struct FormNotSignedException : public std::exception {
			const char * what() const throw() {
				return ("Form::FormNotSigned");
			};
		};
		virtual void execute(Bureaucrat const& executor) const = 0;
	private:
		std::string name;
		bool sign;
		int signgrade;
		int	exegrade;
		std::string target;
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif
