#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Ennemy.hpp"
#include "AWeapon.hpp"

class Character
{
	public:
		Character(std::string const& name = "Unknown");
		Character(Character const&);
		Character& operator=(Character const&);
		~Character();

		std::string getName() const;
		int			getAP() const;
		std::string	getWeaponType() const;
		AWeapon		*getWeapon() const;

		void	equip(AWeapon*);
		void	attack(Ennemy*);
		void	recoverAP();
	private:
		std::string name;
		int		AP;
		AWeapon* weapon;
};

std::ostream& operator<<(std::ostream& os, const Character&);

#endif
