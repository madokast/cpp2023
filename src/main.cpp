#include <string>

#include "codes/strcov.h"
#include "codes/strview.h"
#include "codes/newe.h"
#include "codes/newptr.h"
#include "codes/assignop.h"
#include "codes2/SwapAssignCls.h"

auto codes2() {
    std::cout << "code2 SwapAssignCls" << std::endl;
    SwapAssignCls s1,s2;
    s1 = std::move(s2);
    s1.print();
    s2.print();
}

auto codes() {
    test::string_conv();
    test::chars_conv();

    test::print_sw("hello");
    test::print_sw(std::string{ "world" });

    test::size_sw_str();

    test::new_nothrow();

    test::test_new_ptr();

    test::TestAssign a, b;
    std::cout << (a = b) << std::endl;
}

auto main() -> int {
    codes();
    codes2();
}