#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const& name = "Scrap weapon", int apcost = 10, int damage = 1);
		AWeapon(AWeapon const &);
		AWeapon&	operator=(AWeapon const&);
		~AWeapon();

		int		getDamage() const;
		int		getAPcost() const;
		std::string getName() const;
		virtual void attack() const = 0;
	protected:
		std::string name;
		int	ap_cost;
		int	damage;
};

#endif
