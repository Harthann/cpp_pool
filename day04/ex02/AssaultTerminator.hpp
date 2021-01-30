#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& base);
		AssaultTerminator &operator=(const AssaultTerminator &base);
		~AssaultTerminator();
		ISpaceMarine* clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif
