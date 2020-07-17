#include <iostream>
#include <string>
#include <cmath>

int main(int ac, char **av)
{
	int i;
	char c;
	float f;
	double d;
	std::string str(av[1]);

	if (ac != 2)
		return (0);
	try {
		f = stof(str);
		d = stod(str);
		i = (int)f;
		c = (char)i;
		if (f > CHAR_MAX || f < CHAR_MIN || f != f || !std::isfinite(f))
			std::cout << "char: impossible\n";
		else if (f < 32)
			std::cout << "char: Non displayable\n";
		else
			std::cout << "char: \'" << c << "\'\n";
		if (f > INT32_MAX || f < INT32_MIN || f != f || !std::isfinite(f))
			std::cout << "int: impossible\n";
		else
			std::cout << "int: " << i << std::endl;
		std::cout << "float: " << f << "f\n";
		std::cout << "double: " << d << std::endl;
	}
	catch (std::invalid_argument error)
	{
		std::cout << "Argument invalid, please enter a valid number\n";
	}
	return (0);
}