#include "index.hpp"
#include <iostream>

//#######################
//		GET METHOD		#
//#######################

std::string		index::getFirstName() {
	return (this->first_name);
}

std::string		index::getLastName() {
	return (this->last_name);
}

std::string		index::getNickname() {
	return(this->nickname);
}

std::string		index::getLogin() {
	return (this->login);
}

std::string		index::getPostalAddress() {
	return (this->postal_address);
}

std::string		index::getMailAddress() {
	return (this->email_address);
}

std::string		index::getPhoneNumber() {
	return (this->phone_number);
}

std::string		index::getBirthDate() {
	return (this->birthday_date);
}

std::string		index::getFavoriteMeal() {
	return (this->favorite_meal);
}

std::string		index::getUnderwearColor() {
	return (this->underwear_color);
}

std::string		index::getDarkestSecret() {
	return (this->darkest_secret);
}

//#######################
//		ADD METHOD		#
//#######################

void			index::addFirstName(std::string str) {
	this->first_name = str;
}

void			index::addLastName(std::string str) {
	this->last_name = str;
}

void			index::addNickname(std::string str) {
	this->nickname = str;
}

void		index::addLogin(std::string str) {
	this->login = str;
}

void		index::addPostalAddress(std::string str) {
	this->postal_address = str;
}

void		index::addMailAddress(std::string str) {
	this->email_address = str;
}

void		index::addPhoneNumber(std::string str) {
	this->phone_number = str;
}

void		index::addBirthDate(std::string str) {
	this->birthday_date = str;
}

void		index::addFavoriteMeal(std::string str) {
	this->favorite_meal = str;
}

void		index::addUnderwearColor(std::string str) {
	this->underwear_color = str;
}

void		index::addDarkestSecret(std::string str) {
	this->darkest_secret = str;
}
