#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> mstack;
	std::stack<int> s;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << it << std::endl;
	return (0);
}