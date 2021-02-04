#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	Span sp2 = Span(10);
	Span bigone = Span(10000);
	try {
		std::cout << "===== Basic span of size 5 =====\n";
		sp.test();
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.print();
		std::cout << "Shortest span of sp: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span of sp: " << sp.longestSpan() << std::endl;
	}
	catch (std::string const& str) {
		std::cout << str;
	}
	try {
		std::cout << "===== Big span of size 10000 with random number =====\n";
		bigone.test();
		bigone.addRandomNumber(5000);
		bigone.addNumber(bigone.begin(), bigone.end());
		std::cout << "Shortest span of bigone: " << bigone.shortestSpan() << std::endl;
		std::cout << "Longest span of bigone: " << bigone.longestSpan() << std::endl;
	}
	catch (std::string const& str) {
		std::cout << str;
	}
	try {
		std::cout << "===== Span of size 10 with value inserted from Bigone =====\n";
		sp2.test();
		sp2.addNumber(bigone.begin() + 2500, bigone.begin() + 2510);
		sp2.print();
		std::cout << "Shortest span of sp2: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest span of sp2: " << sp2.longestSpan() << std::endl;
	}
	catch (std::string const& str) {
		std::cout << str;
	}
	return (0);
}
