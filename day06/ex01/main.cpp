#include <iostream>
#include <unistd.h>

typedef struct data {
	std::string s1;
	int n;
	std::string s2;
} Data;

char	random_alphanum(void)
{
	std::string str("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ0123456789");
	int random;

	random = std::rand();
	return (str[random % 62]);
}

void *serialize(void)
{
	void *ptr = new char[20];
	int i;

	i = -1;
	while (++i < 8)
		(reinterpret_cast<char*>(ptr))[i] = random_alphanum();
	reinterpret_cast<int*>(ptr)[2] = std::rand();
	i += 4;
	while (i < 20)
		reinterpret_cast<char*>(ptr)[i++] = random_alphanum();
	return (ptr);
}

Data *deserialize(void *raw)
{
	Data *d_ptr = new Data;

	d_ptr->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	d_ptr->n = (reinterpret_cast<int*>(raw))[2];
	d_ptr->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);
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
