#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <ctime>

Zombie	*newZombie(std::string name)
{
	class Zombie *ret;
	
	ret = new Zombie("Unknown", name);
	return (ret);
}

std::string randomName()
{
	int random;
	int i;
	std::string name;

	std::srand(std::time(nullptr));
	i = 0;
	random = std::rand() % 20;
	while (i < random)
	{
		name.append(1, std::rand() % 26 + 97);
		i++;
	}
	return (name);
}

Zombie	*randomChump(std::string str)
{
	class Zombie *ret;

	ret = new Zombie(str, randomName());
	ret->advert();
	return (ret);
}

int	main(void)
{
	class Zombie *patient_zero;
	class ZombieEvent test;
	std::string str;

	std::cout << "Choisissez un type pour vos zombie\n";
	std::cin >> str;
	test.setZombieType(str);
	patient_zero = newZombie("Harold");
	patient_zero->addType(test.getType());
	patient_zero->advert();
	delete(patient_zero);
	patient_zero = randomChump(test.getType());
	delete(patient_zero);
	return (0);
}
