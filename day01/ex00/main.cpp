#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap()
{
	Pony *Georges;

	std::cout << "Entered PonyOnTheHeap\n\n";
	Georges = new Pony("Georges");
	std::cout << Georges->getName() << " est un poney\n";
	std::cout << "Il es " << Georges->getColor() << std::endl;
	std::cout <<  Georges->getName() << " pese " << Georges->getWeigth() << "kg\n";
	std::cout <<  Georges->getName() << " fais "<< Georges->getSize() << " cm de haut" << std::endl;
	std::cout <<  Georges->getName() << " a fais un regime\n";
	Georges->chgweigth(145);
	std::cout << Georges->getName() << " pese maintenant " << Georges->getWeigth() << "kg\n";
	delete Georges;
	std::cout << "Leaving PonyOnTheHeap\n";
}

void	ponyOnTheStack()
{
	Pony Billy("Billy");

	std::cout << "Entered PonyOnTheStack\n\n";
	std::cout << Billy.getName() << " es " << Billy.getColor() << std::endl;
	std::cout << Billy.getName() << " pese " << Billy.getWeigth() << "kg\n";
	std::cout << Billy.getName() << " fais "<< Billy.getSize() << " cm de haut" << std::endl;
	std::cout << Billy.getName() << " a fais un regime\n";
	Billy.chgweigth(135);
	std::cout <<  Billy.getName() << " pese maintenant " << Billy.getWeigth() << "kg\n";
	std::cout << "Leaving PonyOnTheStack\n";
}

int	main(void)
{
	class Pony Billy("Billy");
	class Pony Georges("Georges");

	ponyOnTheStack();
	std::cout <<  Billy.getName() << " pese " << Billy.getWeigth() << "kg dans le main\n";
	std::cout << std::endl;
	ponyOnTheHeap();
	std::cout << Georges.getName() << " pese " << Georges.getWeigth() << "kg dans le main\n\n";
	return (0);
}