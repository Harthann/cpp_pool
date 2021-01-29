#ifndef VICTIM_HPP
# define VICTIM_HPP	

#include <iostream>

class Victim
{
	public:
		Victim();
		Victim(std::string name);
		Victim(const Victim &base);
		Victim& operator=(const Victim&);
		~Victim();

		std::string	getName() const;
		virtual void		getPolymorphed() const;
	protected:
		std::string name;
};

std::ostream& operator<<(std::ostream &os, const Victim& V);

#endif
