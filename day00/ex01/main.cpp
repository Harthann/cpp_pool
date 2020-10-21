#include <iostream>
#include <iomanip>
#include "index.hpp"
#include "annuaire.hpp"

#define HELP_MESSAGE "\nEXIT : Quit program\nADD : Add contact to the list\nSEARCH : Print the list of contact\nCHANGE : change a contact with a certain index"

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
	std::string a;

	std::cout << "Please enter the index to print\n";
	std::cin >> a;
	if (a.length() > 1 || !std::isdigit(a[0])
		|| std::stoi(a) < 0 || std::stoi(a) > mylist.getContactNumber() - 1)
	{
		std::cout << "Invalid index asked, index must be between 0 and " << mylist.getContactNumber() - 1 << "\n";
		get_info(mylist);
	}
	else
		mylist.print_contact(std::stoi(a));
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
		{
			mylist.print_index();
			get_info(mylist);
		}
		else if (!str.compare("ADD"))
			add_contact(mylist);
		else if (!str.compare("HELP"))
			std::cout << HELP_MESSAGE;
		else if (!str.compare("CHANGE"))
			change_contact(mylist);
	}
	return (0);
}
