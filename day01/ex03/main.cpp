#include "ZombieHorde.hpp"
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

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
	class ZombieHorde *v_horde;
	std::string str;
	std::srand(std::time(NULL));

	std::cout << "Choisissez un type pour vos zombie\n";
	std::cin >> str;
	v_horde = new ZombieHorde(10);
	v_horde->setType(str);
	v_horde->announce();
	delete v_horde;
	return (0);
}
