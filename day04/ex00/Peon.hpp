#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name = "Unknown");
		Peon(const Peon & base);
		Peon &operator=(const Peon &base);
		~Peon();

		void	getPolymorphed() const;
	private:
};

#endif
