#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string const& name);
		Character(Character const&);
		Character const& operator=(Character const&);
		~Character();
	private:
		std::string name;
		AMateria* inventory[4];
};

#endif