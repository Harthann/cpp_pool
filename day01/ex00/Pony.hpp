#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
	public:
		Pony(std::string name = "NO NAME");
		~Pony();
		int		getSize();
		int		getWeigth();
		void	chgweigth(int nb);
		std::string getColor();
		std::string getName();
	private:
		std::string name;
		int			size;
		int			weigth;
		std::string color;
};

#endif