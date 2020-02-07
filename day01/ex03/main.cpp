#include "ZombieEvent.hpp"
#include "Horde.hpp"
#include <iostream>

Zombie	*newZombie(std::string name)
{
	class Zombie *ret;
	
	ret = new Zombie();
	ret->addName(name);
	return (ret);
}

std::string randomName()
{
	std::string ret;
	std::string name[16] = {
		"Harold", "Gaspard", "Baptiste", "Roger", "Georges", "Jack", "Stephane", "Hugo",
		"Pierre", "Antoine", "Benjamin", "Nicolas", "Gaston", "Steve", "Frank", "Thierry"
	};

	ret = name[std::rand() % 16];
	return (ret);
}

int	main(void)
{
	class ZombieEvent test;
	class Horde *v_horde;
	std::string str;
	std::srand(std::time(nullptr));

	std::cout << "Choisissez un type pour vos zombie\n";
	std::cin >> str;
	test.setZombieType(str);
	v_horde = new Horde(50);
	v_horde->setType(test.getType());
	v_horde->announce();
	return (0);
}