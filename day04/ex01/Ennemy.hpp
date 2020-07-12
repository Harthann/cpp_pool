#ifndef ENNEMY_HPP
# define ENNEMY_HPP

#include <iostream>

class Ennemy
{
	public:
		Ennemy(int hp, std::string type);
		Ennemy(Ennemy const &);
		virtual ~Ennemy();
		Ennemy& operator=(Ennemy const& e);

		int		getHP() const;
		std::string	getType() const;
		virtual void	takeDamage(int);
	private:
		int	hp;
		std::string type;
	friend class SuperMutant;
	friend class RadScorpion;
};

#endif