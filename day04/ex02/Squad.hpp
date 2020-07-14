#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad();
		~Squad();
		Squad(Squad const&);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int	push(ISpaceMarine*);

		const Squad& operator=(Squad const&);
	private:
		ISpaceMarine **list;
		int	count;
};

#endif