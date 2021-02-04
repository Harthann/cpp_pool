#include "mutantstack.hpp"
#include <list>

void	list_test()
{
	std::cout << "\n===== Testing List output: =====\n";
	std::list<int> l;

	l.push_back(5);
	l.push_back(17);
	std::cout << "Value currently at the top: " << l.back() << std::endl;
	l.pop_back();
	std::cout << "Current size of the stack: " << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	for (std::list<int>::iterator lit = l.begin(); lit != l.end(); lit++)
		std::cout << *lit << " ";
	std::cout << std::endl;
	std::list<int>::iterator lit = l.begin();
	lit++;
	lit++;
	*lit = 42;
	for (std::list<int>::iterator lit = l.begin(); lit != l.end(); lit++)
		std::cout << *lit << " ";
	std::cout << std::endl;
}

int main(void)
{
	MutantStack<int> mstack;

	std::cout << "===== Testing MutantStack output: =====\n";
	mstack.push(5);
	mstack.push(17);
	std::cout << "Value currently at the top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Current size of the stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	MutantStack<int>::iterator it = mstack.begin() + 2;
	*it = 42;
	it = mstack.begin();
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	list_test();
	return (0);
}

