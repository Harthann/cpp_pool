#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer&);
		Sorcerer& operator=(const Sorcerer&);
		~Sorcerer();

		std::string getName() const;
		std::string getTitle() const;
		void	polymorph(Victim const &) const;
	private:
		std::string name;
		std::string title;
};


std::ostream& operator<<(std::ostream& os, const Sorcerer& s);

#endif