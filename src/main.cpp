#include <iostream>
#include <algorithm>

auto main() -> int {
    std::array a {1,2,3};
    std::for_each(a.begin(), a.end(), [](const auto e) {
        std::cout << e << std::endl;
    });
}
