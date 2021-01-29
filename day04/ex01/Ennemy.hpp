#ifndef ENNEMY_HPP
# define ENNEMY_HPP

#include <iostream>

class Ennemy
{
	public:
		Ennemy(int hp = 0, std::string type = "Base");
		Ennemy(Ennemy const &);
		virtual ~Ennemy();
		Ennemy& operator=(Ennemy const& e);

		int		getHP() const;
		std::string	getType() const;
		virtual void	takeDamage(int);
	protected:
		int	hp;
		std::string type;
};

#endif
