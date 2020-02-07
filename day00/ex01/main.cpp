#include <iostream>
#include <iomanip>
#include "index.hpp"
#include "annuaire.hpp"

void	add_contact(class annuaire &mylist)
{
	if (mylist.getContactNumber() < 8)
		mylist.addContact();
	else
		std::cout << "Already 8 contact in the list, please delete one\n";
}

void	change_contact(class annuaire &mylist)
{
	int a;
	int nb;

	std::cout << "Please enter the index to modify\n";
	nb = mylist.getContactNumber();
	std::cin >> a;
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	mylist.chgindex(a);
	mylist.addContact();
	mylist.chgindex(nb);
}

void	get_info(class annuaire &mylist)
{
	int a;

	std::cout << "Please enter the index to print\n";
	std::cin >> a;
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	mylist.print_contact(a);
}

int		main(void)
{
	class annuaire mylist;
	std::string str;
	int nb, a;

	while (str.compare("EXIT"))
	{
		std::cout << "\nEnter the action you want to do, HELP for more info\n";
		std::getline(std::cin, str);
		if (!str.compare("SEARCH"))
			mylist.print_index();
		else if (!str.compare("ADD"))
			add_contact(mylist);
		else if (!str.compare("HELP"))
		{
			std::cout << "\nEXIT : Quit program\nADD : Add contact to the list\n";
			std::cout << "SEARCH : Print the list of contact\nCHANGE : change a contact with a certain index";
		}
		else if (!str.compare("CHANGE"))
			change_contact(mylist);
		else if (!str.compare("INFO"))
			get_info(mylist);
	}
	return (0);
}
