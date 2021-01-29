#include "Ennemy.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

Ennemy::Ennemy(int hp, std::string type) : hp(hp), type(type)
{}

Ennemy::Ennemy(Ennemy const& e) : hp(e.hp), type(e.type)
{
}

Ennemy::~Ennemy()
{}

Ennemy& Ennemy::operator=(Ennemy const& e)
{
	hp = e.hp;
	type = e.type;
	return (*this);
}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################

int		Ennemy::getHP() const
{
	return (this->hp);
}

std::string Ennemy::getType() const
{
	return (this->type);
}

void	Ennemy::takeDamage(int nb)
{
	if (nb > 0)
		this->hp -= nb;
}

//#######################################
//#				OPERATOR				#
//#######################################
