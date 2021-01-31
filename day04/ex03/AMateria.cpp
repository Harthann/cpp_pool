#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : type(type), xp(0)
{}

AMateria::AMateria(AMateria const& tmp)
{
	this->type = tmp.getType();
	this->xp = tmp.getXP();
}

AMateria::~AMateria()
{}

unsigned int AMateria::getXP() const
{
	return (this->xp);
}

std::string const& AMateria::getType() const
{
	return (this->type);
}

void	AMateria::setType(std::string const& type)
{
	this->type = type;
}

void	AMateria::setXP(int xp)
{
	this->xp = xp;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	this->xp += 10;
}

AMateria const& AMateria::operator=(AMateria const& base)
{
	xp = base.getXP();
	return (*this);
}
