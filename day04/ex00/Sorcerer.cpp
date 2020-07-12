#include "Sorcerer.hpp"

//###############################
//#		CONSTRUCTOR/DESTRUCTOR	#
//###############################

Sorcerer::Sorcerer() : name("Default") , title("Default")
{
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::Sorcerer(std::string name, std::string title) :
name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer& s)
{
	this->name = s.name;
	this->title = s.title;
	std::cout << s.name << ", " << s.title << ", is born!\n";
}

Sorcerer& Sorcerer::operator=(const Sorcerer& s)
{
	name = s.name;
	title = s.title;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title;
	std::cout << ", is dead. Consequences will never be the same!\n";
}

//###############################
//#		MEMBER FUNCTION			#
//###############################

std::string	Sorcerer::getName() const
{
	return (this->name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->title);
}

void		Sorcerer::polymorph(Victim const &V) const
{
	V.getPolymorphed();
}

//###############################
//#		OVERLOADED OPERATOR		#
//###############################

std::ostream& operator<<(std::ostream& os, const Sorcerer& s)
{
	os << "I am " << s.getName() << ", " << s.getTitle();
	os << ", and I like ponies!\n";
	return (os);
}