#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(std::string const& type = "AMateria");
		AMateria(AMateria const&);
		AMateria const& operator=(AMateria const&);
		virtual	~AMateria();

		std::string const& getType() const;
		unsigned int getXP() const;

		void	setType(std::string const& type);
		void	setXP(int);
	
		virtual AMateria *clone() const = 0;
		virtual void use(class ICharacter& target);
	private:
		std::string type;
		unsigned int xp;
};

#endif
