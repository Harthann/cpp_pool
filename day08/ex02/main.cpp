#include "mutantstack.hpp"
#include <list>

int main(void)
{
	MutantStack<int> mstack;

	std::cout << "\033[0;32mTesting MutantStack output:\n";
	mstack.push(5);
	mstack.push(17);
	std::cout << "Value currently at the top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Current size of the stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		std::cout << "Operator ->: " << it.operator->() << " " << *it.operator->() << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "\033[1;36mTesting List output:\n";
	std::list<int> l;

	l.push_front(5);
	l.push_front(17);
	std::cout << "Value currently at the top: " << l.front() << std::endl;
	l.pop_front();
	std::cout << "Current size of the stack: " << l.size() << std::endl;
	l.push_front(3);
	l.push_front(5);
	l.push_front(737);
	std::list<int>::iterator lit = l.begin();
	std::list<int>::iterator lite = l.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << " ";
		std::cout << "Operator ->: " << lit.operator->() << " " << *lit.operator->() << std::endl;
		++lit;
	}
	return (0);
}