#include <iostream>
#include <algorithm>
#include <array>

auto main() -> int {
    std::array a {1,2,3,4};
    std::for_each(a.begin(), a.end(), [](const auto e) {
        std::cout << e << std::endl;
    });
    for (const auto item: a) {
        std::printf("%d\n", item);
    }
}
