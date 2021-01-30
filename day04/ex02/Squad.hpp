#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <vector>

class Squad : public ISquad
{
	public:
		Squad();
		~Squad();
		Squad(Squad const&);
		Squad(ISquad const&);
		Squad &operator=(const Squad& base);
	
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int	push(ISpaceMarine*);

	private:
		std::vector<ISpaceMarine*> list;
};

#endif
