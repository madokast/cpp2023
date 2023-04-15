#include <string>

#include "codes/strcov.h"
#include "codes/strview.h"
#include "codes/newe.h"
#include "codes/newptr.h"

auto main() -> int {
	test::string_conv();
	test::chars_conv();

	test::print_sw("hello");
	test::print_sw(std::string{ "world" });

	test::size_sw_str();

	test::new_nothrow();

	test::test_new_ptr();
}