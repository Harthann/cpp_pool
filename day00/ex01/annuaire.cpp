#include <iostream>
#include <iomanip>
#include <string>
#include "annuaire.hpp"

annuaire::annuaire() : number(0)
{}

int		annuaire::getContactNumber()
{
	return (this->number);
}

void	annuaire::chgindex(int nb)
{
	this->number = nb;
}

void	annuaire::addContact()
{
	std::string str;

	std::cout << "Write the first name of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addFirstName(str);

	std::cout << "Write the last name of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addLastName(str);

	std::cout << "Write the nickname of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addNickname(str);

	std::cout << "Write the login of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addLogin(str);

	std::cout << "Write the postal address of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addPostalAddress(str);

	std::cout << "Write the mail address of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addMailAddress(str);

	std::cout << "Write the phone number of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addPhoneNumber(str);

	std::cout << "Write the birth date of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addBirthDate(str);

	std::cout << "Write the favorite meal of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addFavoriteMeal(str);

	std::cout << "Write the underwear color of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addUnderwearColor(str);

	std::cout << "Write the darkest secret of your contact" << std::endl;
	std::getline(std::cin, str);
	this->list[this->number].addDarkestSecret(str);
	this->number++;
}

void	annuaire::print_contact(int number)
{
	std::cout << "First name : " << this->list[number].getFirstName();
	std::cout << std::endl;
	std::cout << "Last name : " << this->list[number].getLastName();
	std::cout << std::endl;
	std::cout << "Nickname : " << this->list[number].getNickname();
	std::cout << std::endl;
	std::cout << "Login : " << this->list[number].getLogin();
	std::cout << std::endl;
	std::cout << "Postal address : " << this->list[number].getPostalAddress();
	std::cout << std::endl;
	std::cout << "Mail address: " << this->list[number].getMailAddress();
	std::cout << std::endl;
	std::cout << "Phone number : " << this->list[number].getPhoneNumber();
	std::cout << std::endl;
	std::cout << "Birth date : " << this->list[number].getBirthDate();
	std::cout << std::endl;
	std::cout << "Favorite meal : " << this->list[number].getFavoriteMeal();
	std::cout << std::endl;
	std::cout << "Underwear color : " << this->list[number].getUnderwearColor();
	std::cout << std::endl;
	std::cout << "Darkest secret : " << this->list[number].getDarkestSecret();
	std::cout << std::endl;
}

void	annuaire::print_index()
{
	std::string str;
	int i;

	i = 0;
	while (i < this->number)
	{
		std::cout << std::setw(10) << i << "|";
		str = this->list[i].getFirstName();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(1, '.');
		}
		std::cout << std::setw(10) << str << "|";
		str = this->list[i].getLastName();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(1, '.');
		}
		std::cout << std::setw(10) << str << "|";
		str = this->list[i].getNickname();
		if (str.length() > 10)
		{
			str.erase(9);
			str.append(1, '.');
		}
		std::cout << std::setw(10) << str << "|";
		std::cout << std::endl;
		i++;
	}
}