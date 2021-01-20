#include <iostream>

int		main(void)
{
	std::string brain;
	std::string *ptr;
	std::string &ref = brain;

	brain = "HI THIS IS BRAIN";
	ptr = &brain;
	ref = brain;
	std::cout << "This is the base string : " << brain << std::endl;
	std::cout << "This is the pointer on string : " << *ptr << std::endl;
	std::cout << "This is the reference of string : " << ref << std::endl;
	return (0);
}