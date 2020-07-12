#include "Character.hpp"

//#######################################
//#			CONSTRUCTOR/DESTRUCTOR		#
//#######################################

Character::Character(std::string const& name) : name(name)
{
	this->AP = 40;
	this->weapon = NULL;
}

Character::Character(Character const& tmp)
{
	this->name = tmp.name;
	this->AP = tmp.AP;
	this->weapon = tmp.weapon;
}

Character::~Character()
{}

Character& Character::operator=(Character const& tmp)
{
	name = tmp.name;
	AP = tmp.AP;
	weapon = tmp.weapon;
	return (*this);
}

//#######################################
//#			MEMEBR FUNCTIONS			#
//#######################################


std::string Character::getName() const
{
	return (this->name);
}

int			Character::getAP() const
{
	return (this->AP);
}

std::string		Character::getWeaponType() const
{
	if (this->weapon)
		return (this->weapon->getName());
	return (NULL);
}

AWeapon*	Character::getWeapon() const
{
	return (this->weapon);
}

void	Character::equip(AWeapon* to_equip)
{
	this->weapon = to_equip;
}

void	Character::attack(Ennemy* ennemy)
{
	std::cout << this->weapon << " adress of weapon\n";
	if (this->weapon && this->AP >= weapon->getAPcost())
	{
		std::cout << this->getName();
		std::cout << " attacks " << ennemy->getType();
		std::cout << " with a " << weapon->getName() << std::endl;
		weapon->attack();
		ennemy->takeDamage(weapon->getDamage());
		this->AP -= weapon->getAPcost();
		if (ennemy->getHP() <= 0)
			delete ennemy;
	}
}

void	Character::recoverAP()
{
	this->AP += 10;
	if (this->AP > 40)
		this->AP = 40;
}

//#######################################
//#				OPERATOR				#
//#######################################

std::ostream& operator<<(std::ostream& os, const Character& tmp)
{
	os << tmp.getName() << " has " << tmp.getAP();
	os << " AP and ";
	if (tmp.getWeapon())
		os << "wields a " << tmp.getWeaponType() << std::endl;
	else
		os << "is unarmed\n";
	return (os);
}