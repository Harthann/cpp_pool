#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
	public:
		Pony();
		int		getSize();
		int		getWeigth();
		void	chgweigth(int nb);
		std::string getColor();
	private:
		int			size;
		int			weigth;
		std::string color;
};

#endif