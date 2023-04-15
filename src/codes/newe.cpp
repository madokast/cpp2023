#include <iostream>
#include "newe.h"

void test::new_nothrow() {
	int* p{ new(std::nothrow)(int[5]) };
	if (p){
		delete[] p;
	}
}