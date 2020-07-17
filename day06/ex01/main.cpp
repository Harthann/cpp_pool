#include "header.hpp"
#include <iostream>
#include <unistd.h>

char	random_alphanum(void)
{
	std::string str("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ0123456789");
	int random;

	random = std::rand();
	return (str[random % 62]);
}

void *serialize(void)
{
	void *ptr = new char[19];
	int i;

	i = -1;
	while (++i < 8)
		((char*)ptr)[i] = random_alphanum();
	((int*)ptr)[2] = std::rand();
	i += 4;
	while (i < 19)
		((char*)ptr)[i++] = random_alphanum();
	// write(1, ptr, 19);
	return (ptr);
}

Data *deserialize(void *raw)
{
	Data *d_ptr = new Data;

	d_ptr->s1 = std::string((char*)raw, 8);
	d_ptr->n = ((int*)raw)[2];
	d_ptr->s2 = std::string((char*)raw + 12, 8);
	return (d_ptr);
}

int main(void)
{
	void *ptr;
	Data *data;
	std::srand(std::time(nullptr));

	ptr = serialize();
	data = deserialize(ptr);
	std::cout << "String s1: " << data->s1 << std::endl;
	std::cout << "Int n: " << data->n << std::endl;
	std::cout << "String s2: " << data->s2 << std::endl;
	return (0);
}