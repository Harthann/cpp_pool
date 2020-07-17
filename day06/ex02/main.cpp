#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	Base& tmp = p;
	try {
		tmp = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (const std::bad_cast& e) {}

	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch (const std::bad_cast& e) {}

	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch (const std::bad_cast& e) {}
}

int main(void)
{
	Base base;
	Base *ptr;
	std::srand(time(nullptr));

	ptr = base.generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	return (0);
}