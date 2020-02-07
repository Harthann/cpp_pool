#include <iostream>

class ZombieEvent
{
	public:
		ZombieEvent();	
		ZombieEvent(std::string str);
		void setZombieType(std::string str);
		std::string getType();
	private:
		std::string type;
};