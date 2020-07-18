#include "span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.test();
	try {
		sp.addNumber(5, sp.begin(), sp.end());
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		sp.test();
	}
	catch (std::exception& e) {
		std::cout << "Trying to add more number than initialy indicated\n";
		std::cout << e.what();
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}