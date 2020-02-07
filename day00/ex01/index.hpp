#ifndef INDEX_HPP
#define INDEX_HPP

#include <iostream>

class index
{
	public:
	//	Get attribut

		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getLogin();
		std::string getPostalAddress();
		std::string getMailAddress();
		std::string getPhoneNumber();
		std::string getBirthDate();
		std::string getFavoriteMeal();
		std::string getUnderwearColor();
		std::string getDarkestSecret();

	// Add atribute

		void	addFirstName(std::string str);
		void	addLastName(std::string str);
		void	addNickname(std::string str);
		void	addLogin(std::string str);
		void	addPostalAddress(std::string str);
		void	addMailAddress(std::string str);
		void	addPhoneNumber(std::string str);
		void	addBirthDate(std::string str);
		void	addFavoriteMeal(std::string str);
		void	addUnderwearColor(std::string str);
		void	addDarkestSecret(std::string str);

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
};

#endif