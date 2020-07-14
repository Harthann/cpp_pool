#include "Character.hpp"

Character::Character(std::string const& name) : name(name), inventory{0, 0, 0, 0}
{
}

Character::Character(Character const& base)
{
	this->name = base.getName();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = base.inventory[i]->clone();
}

Character const& Character::operator=(Character const& base)
{
	this->name = base.getName();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = base.inventory[i]->clone();
	return (*this);
}