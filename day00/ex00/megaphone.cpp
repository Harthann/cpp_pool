#include <iostream>
#include <string>

int		main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			std::string str(av[i], 0, strlen(av[i]));
			j = 0;
			while (j < str.length())
			{
				str[j] = toupper(str[j]);
				j++;
			}
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return (0);
}