#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const& name, int apcost, int damage);
		AWeapon(AWeapon const &);
		AWeapon&	operator=(AWeapon const&);
		~AWeapon();

		int		getDamage() const;
		int		getAPcost() const;
		std::string getName() const;
		virtual void attack() const = 0;
	private:
		std::string name;
		int	ap_cost;
		int	damage;
};

#endif