#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const&);
		PowerFist &operator=(PowerFist const &base);
		~PowerFist();
		void	attack() const;
	private:
};

#endif
