#include "MutantStack.hpp"

template <typename T>
void display(MutantStack<T> &stack)
{
	if (stack.empty())
	{
		std::cout << "Stack is empty" << std::endl;
		return ;
	}
	MutantStack<int>::iterator it = stack.begin();
	MutantStack<int>::iterator ite = stack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void test42()
{
	std::cout << "Test 1: 42 test" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
	std::cout << std::endl;
}

void test1()
{
	MutantStack<int> mstack;
	std::cout << "Test 1: MutantStack of size 1" << std::endl;
}

void test_canonique()
{
	std::cout << "Test 0: Canonique" << std::endl;
	MutantStack<int> s1;
	s1.push(5);
	s1.push(17);

	std::cout << "Display of s1" << std::endl;
	display(s1);

	std::cout << "Equals operator between s1 and s2" << std::endl;
	MutantStack<int> s2;
	s2 = s1;

	std::cout << "Display of s2" << std::endl;
	display(s2);

	std::cout << "Push 3 in s2" << std::endl;
	s2.push(3);

	std::cout << "Display of s2" << std::endl;
	display(s2);

	std::cout << "Display of s1" << std::endl;
	display(s1);
	std::cout << std::endl;

	std::cout << "Copy constructor of s3 with s2" << std::endl;
	MutantStack<int> s3(s2);
	
	std::cout << "Display of s3" << std::endl;
	display(s3);

	std::cout << "Push 42 in s3" << std::endl;
	s3.push(42);

	std::cout << "Display of s3" << std::endl;
	display(s3);

	std::cout << "Display of s2" << std::endl;
	display(s2);

	std::cout << "Display of s1" << std::endl;
	display(s1);
	std::cout << std::endl;
}

void test2()
{
	MutantStack<int> mstack;

	std::cout << "Test 2: Try to remove element from mutant stack" << std::endl;
	std::cout << "Display of mstack" << std::endl;
	display(mstack);

	std::cout << "Add 5 to stack" << std::endl;
	mstack.push(5);

	std::cout << "Display of mstack" << std::endl;
	display(mstack);

	std::cout << "Try to remove element from mstack" << std::endl;
	mstack.pop();

	std::cout << "Display of mstack" << std::endl;
	display(mstack);
}

int main()
{
	test_canonique();
	test42();
	std::cout << std::endl;
	test1();
	std::cout << std::endl;
	test2();
	std::cout << std::endl;
	return 0;
}
