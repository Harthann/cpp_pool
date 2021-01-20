#include <iostream>

class Zombie
{
	public:
		Zombie(std::string type = "Unknown", std::string name = "Unknown");
		~Zombie();
		void	advert();
		
		void	addType(std::string str);
		void	addName(std::string str);

		std::string getName();
		std::string getType();
	private:
		std::string type;
		std::string name;
};
