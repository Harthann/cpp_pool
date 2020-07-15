#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const& name, int, int);
		Form(Form const&);
		Form const& operator=(Form const&);
		~Form() {};
		
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExeGrade() const;

		void	beSigned(class Bureaucrat);

		void GradeTooHighException();
		void GradeTooLowException();
	private:
		std::string name;
		bool sign;
		int signgrade;
		int	exegrade;
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif