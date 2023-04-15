#include <string_view>
#include <iostream>

namespace test {
	void print_sw(std::string_view sv) {
		std::cout << sv << " L " << sv.size() <<  std::endl;
	}

	void size_sw_str() {
		std::cout << "size of string_view = " << sizeof(std::string_view) << std::endl;
		std::cout << "size of string = " << sizeof(std::string) << std::endl;
	}
}