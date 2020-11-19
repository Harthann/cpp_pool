#include <iostream>
#include <fstream>
#include <string>

std::string	*get_file(char *path)
{
	std::ifstream myfile;
	std::string *tmp;
	char mem;

	myfile.open(path);
	tmp = new std::string;
	if (myfile.is_open())
	{
		myfile.read(&mem,1);
		do
		{
			tmp->append(1, mem);
			mem = 0;
			myfile.read(&mem,1);
		} while (myfile);
		tmp->append(1, mem);
	}
	myfile.close();
	return (tmp);
}

void	change_occurence(std::string *mem, std::string s1, std::string s2)
{
	std::size_t location;

	location = mem->find(s1);
	while (location != -1)
	{
		mem->replace(location, s1.length(), s2);
		location = mem->find(s1, location + s2.length());
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
		delete mem;
	}
	else
		std::cout << "Wrong argument number\n";
	return (0);
}
