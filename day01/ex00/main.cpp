#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap()
{
	class Pony *Georges;
	Georges = new Pony();
	std::cout << "Georges est un poney\n";
	std::cout << "Il es " << Georges->getColor() << std::endl;
	std::cout << "Georges pese " << Georges->getWeigth() << "kg\n";
	std::cout << "Georges fais "<< Georges->getSize() << " cm de haut" << std::endl;
	std::cout << "Georges a fais un regime\n";
	Georges->chgweigth(145);
	std::cout << "Georges pese maintenant " << Georges->getWeigth() << "kg\n";
}

void	ponyOnTheStack()
{
	class Pony Billy;

	std::cout << "Billy es " << Billy.getColor() << std::endl;
	std::cout << "Billy pese " << Billy.getWeigth() << "kg\n";
	std::cout << "Billy fais "<< Billy.getSize() << " cm de haut" << std::endl;
	std::cout << "Billy a fais un regime\n";
	Billy.chgweigth(135);
	std::cout << "Billy pese maintenant " << Billy.getWeigth() << "kg\n";
}

int	main(void)
{
	class Pony Billy;

	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}