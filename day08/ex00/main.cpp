#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <deque>

int main(void)
{
	std::vector<int> v(1, 3);
	std::deque<int> dq(1, 3);
	std::deque<double> ddq(5, 3.5);
	int tmp;

	v.push_back(5);
	v.push_back(2);
	v.push_back(3);
	v.push_back(8);
	v.push_back(0);
	v.push_back(1);
	dq.push_back(2);
	dq.push_front(5);
	dq.push_front(3);
	dq.push_front(92);
	dq.push_front(0);
	dq.push_back(34);
	dq.push_back(657);
	std::cout << "v contain these value : ";
	print(v);
	std::cout << "dq contain these value : ";
	print(dq);
	try {
		tmp = easyfind(v, 3);
		std::cout << "Value : " << 3 <<" in v found at index: " << tmp << std::endl;
		tmp = easyfind(v, 1);
		std::cout << "Value : " << 1 <<" in v found at index: " << tmp << std::endl;
		tmp = easyfind(dq, 657);
		std::cout << "Value : " << 657 <<" in dq found at index: " << tmp << std::endl;
		tmp = easyfind(dq, 92);
		std::cout << "Value : " << 92 <<" in dq found at index: " << tmp << std::endl;
		tmp = easyfind(ddq, 3);
		std::cout << "Value : " << 3 <<" in ddq found at index: " << tmp << std::endl;
		tmp = easyfind(v, 4);
		std::cout << "Value : " << 4 <<" in ddq found at index: " << tmp << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
