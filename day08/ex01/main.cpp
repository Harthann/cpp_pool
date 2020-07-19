#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	Span bigone = Span(10000);
	sp.test();
	bigone.test();
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.print();
		bigone.addRandomNumber(5000);
		bigone.addNumber(bigone.begin(), bigone.end());
		std::cout << "Shortest span of sp: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span of sp: " << sp.longestSpan() << std::endl;
		std::cout << "Shortest span of bigone: " << bigone.shortestSpan() << std::endl;
		std::cout << "Longest span of bigone: " << bigone.longestSpan() << std::endl;
	}
	catch (std::string const& str) {
		std::cout << str;
	}
	
	return (0);
}