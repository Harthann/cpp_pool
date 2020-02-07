#ifndef ANNUAIRE_HPP
#define ANNUAIRE_HPP

#include <iostream>
#include "index.hpp"

class annuaire
{
	public:
		annuaire();
		void	addContact();
		int		getContactNumber();
		void	chgindex(int nb);
		void	print_contact(int number);
		void	print_index();
	private:
		class index list[8];
		int	number;
};

#endif