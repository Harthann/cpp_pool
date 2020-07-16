#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) :
Form("Shrubbery creation", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& base)
{
	this->setName(base.getName());
	this->setTarget(base.getTarget());
	this->setSignGrade(base.getSignGrade());
	this->setExeGrade(base.getExeGrade());
	this->setSign(base.getSign());
}

ShrubberyCreationForm const& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& base)
{
	this->setName(base.getName());
	this->setTarget(base.getTarget());
	this->setSignGrade(base.getSignGrade());
	this->setExeGrade(base.getExeGrade());
	this->setSign(base.getSign());
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (!this->getSign())
		throw "This form isn't sign yet\n";
	if (executor.getGrade() > this->getExeGrade())
		throw "This bureaucrat's grade is too low to execute this form\n";
	std::string file_name(this->getTarget().append("_shrubbery"));
	std::ofstream output_file(file_name);
	output_file << "\t_\\/_\n";
	output_file << "     /\\\n";
	output_file << "     /\\\n";
	output_file << "    /  \\\n";
	output_file << "    /~~\\o\n";
	output_file << "   /o   \\\n";
	output_file << "  /~~*~~~\n";
	output_file << " o/    o \\\n";
	output_file << " /~~~~~~~~\\~`\n";
	output_file << "/__*_______\n";
	output_file << "     ||\n";
	output_file << "   \\====/\n";
	output_file << "    \\__/";
	// EXECUTE CODE	
}