#include <iostream>

class Zombie
{
	public:
		Zombie();
		void	advert();
		
		void	addType(std::string str);
		void	addName(std::string str);

		std::string getName();
		std::string getType();
	private:
		std::string type;
		std::string name;
};