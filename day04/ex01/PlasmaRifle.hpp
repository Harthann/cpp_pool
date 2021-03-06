#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const& rifle);
		PlasmaRifle &operator=(PlasmaRifle const &base);
		~PlasmaRifle();

		void	attack() const;
	private:
};

#endif
