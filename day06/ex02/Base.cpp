#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* Base::generate(void)
{
	int random = std::rand();
	if (random % 3 == 0)
		return (new A);
	if (random % 3 == 1)
		return (new B);
	if (random % 3 == 2)
		return (new C);
	return (NULL);
}