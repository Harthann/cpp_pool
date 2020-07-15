#include "Character.hpp"

Character::Character(std::string const& name) : name(name)
{
	inventory[0] = 0;
	inventory[1] = 0;
	inventory[2] = 0;
	inventory[3] = 0;
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

Character::~Character()
{}

std::string const& Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (i < 4 && this->inventory[i])
		i++;
	if (i < 4 && m)
	{
		this->inventory[i] = m;
		std::cout << "\033[0;36mCharacter \"" << this->getName() << "\" equiped a ";
		std::cout << m->getType() << " materia!\n\033[0m";
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && this->inventory[idx])
		this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else if (!this->inventory[idx])
		std::cout << "Inventory pouch " << idx << " is empty or don't exist\n";
}
