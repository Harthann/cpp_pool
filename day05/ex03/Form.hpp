#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string const& name = "None", int = 0, int = 0, std::string const& = "None");
		Form(Form const&);
		Form const& operator=(Form const&);
		~Form() {};
		
		std::string getName() const;
		bool getSign() const;
		int getSignGrade() const;
		int getExeGrade() const;
		std::string getTarget() const;

		void setName(std::string const&);
		void setSign(bool);
		void setSignGrade(int);
		void setExeGrade(int);
		void setTarget(std::string const&);

		void	beSigned(class Bureaucrat);

		void GradeTooHighException();
		void GradeTooLowException();

		virtual void execute(class Bureaucrat const&) const = 0;
	private:
		std::string name;
		bool sign;
		int signgrade;
		int	exegrade;
		std::string target;
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif