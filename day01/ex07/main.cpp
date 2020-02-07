#include <iostream>
#include <fstream>
#include <string>

std::string	*get_file(char *path)
{
	std::ifstream myfile;
	std::string *tmp;
	// std::string mem;
	char mem[32];

	myfile.open(path);
	tmp = new std::string;
	mem[31] = '\0';
	if (myfile.is_open())
	{
		myfile.read(mem, 30);
		if (!myfile)
			tmp->append(mem);
		while (myfile)
		{
			tmp->append(mem);
			myfile.read(mem, 30);
		}
	}
	myfile.close();
	return (tmp);
}

void	change_occurence(std::string *mem, char *s1, char *s2)
{
	std::size_t location;

	location = mem->find(s1);
	while (location != -1)
	{
		mem->replace(location, strlen(s1), s2);
		location = mem->find(s1, location + strlen(s2));
	}
}

void	wright_file(std::string *mem, char *file)
{
	std::ofstream	new_file;
	std::string		name;

	name = file;
	name.append(".replace");
	new_file.open(name);
	new_file << *mem;
}

int		main(int ac, char **av)
{
	std::string *mem;

	if (ac == 4)
	{
		mem = get_file(av[1]);
		change_occurence(mem, av[2], av[3]);
		wright_file(mem, av[1]);
	}
	else
		std::cout << "Wrong argument number\n";
	return (0);
}