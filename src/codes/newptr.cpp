#include <iostream>
#include <memory>
#include "newptr.h"

static void useIntp(int* a) { std::cout << "read int*" << *a << " addr " << static_cast<void*>(a) << std::endl; }
static void useIntr(int& a) { std::cout << "read int*" << a << " addr " << static_cast<void*>(&a) << std::endl; }

static void myfree(int* p) { std::cout << "free" << std::endl; delete p; }

void test::test_new_ptr() {
	std::unique_ptr<int> p{ std::make_unique<int>() };
	*p = 123;
	useIntp(p.get());
	useIntr(*p);

	auto p2{ std::unique_ptr<int, decltype(&myfree)>(new int, myfree) };

	std::shared_ptr<int> s{ std::make_shared<int>() };
	auto s2{ s };
	std::cout << "share cnt " << s.use_count() << std::endl;
	std::cout << "share cnt " << s2.use_count() << std::endl;
}