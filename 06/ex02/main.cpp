#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *generate(void)
{
	int i;
	std::srand(std::time(NULL));
	i = (std::rand() % 3);

	switch (i)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		default:
			return (new C);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
}

void wait(int second)
{
	std::time_t start = std::time(NULL);
	while (std::time(NULL) - start < second);
}

int main()
{
	int count = 10;
	int second = 1;

	for (int i = 0; i < count; i++)
	{
		std::cout << "Test " << i + 1 << "/" << count << std::endl;
		Base *b = generate();
		identify(b);
		identify(*b);
		std::cout << std::endl;
		delete b;
		if (i + 1 < count)
			wait(second);
	}
	return (0);
}
