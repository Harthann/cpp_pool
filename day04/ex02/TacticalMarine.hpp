#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& base);
		TacticalMarine &operator=(const TacticalMarine& base);
		~TacticalMarine();
		ISpaceMarine* clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif
