#include <iostream>
#include <string>
#include <cmath>
#include <limits.h>
#include <math.h>

void	convertINT(double &d)
{
	if (d > INT_MAX || d < INT_MIN || !std::isfinite(d))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: "  << static_cast<int>(d) << std::endl;
}

void	convertCHAR(double &d)
{
	std::cout << "char: ";
	if (d > CHAR_MAX || d < CHAR_MIN)
		std::cout << "impossible\n";
	else if (std::isprint(static_cast<char>(d)))
		std::cout << "'" << static_cast<char>(d) << "'" <<std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	convertDOUBLE(double &d)
{
	double fract_part;
	double int_part;

	fract_part = modf(d, &int_part);
	std::cout << "double: " << d;
	if (fract_part == 0 && std::isfinite(d))
		std::cout << ".0";
	std::cout << std::endl;

}

void	convertFLOAT(float d)
{
	float fract_part;
	float int_part;

	fract_part = modf(d, &int_part);
	std::cout<< "float: " << static_cast<float>(d);
	if (fract_part == 0 && std::isfinite(d))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

int main(int ac, char **av)
{
	double d;
	std::string str;
	if (ac != 2)
		return (0);
	str = av[1];
	if (str.length() == 1 && std::isprint(str[0]))
		d = static_cast<double>(str[0]);
	else
		d = atof(av[1]);
	try {
		convertCHAR(d);
		convertINT(d);
		convertFLOAT(d);
		convertDOUBLE(d);
	}
	catch (std::invalid_argument error)
	{
		std::cout << "Argument invalid, please enter a valid number\n";
	}
	return (0);
}
