#include<iostream>
#include<string>
#include<charconv>
#include<random>

#include "strcov.h"


void test::string_conv() {
	std::cout << std::to_string(12) << std::endl;
	std::cout << std::to_string(12.21) << std::endl;

	std::string s1{ "123" };
	std::string s2{ "12.3" };

	std::cout << std::stoi(s1) << std::endl;
	std::cout << std::stof(s2) << std::endl;
}

void test::chars_conv() {
    char buf[64];
    for (int i = 0; i < 10; i++) {
        auto [ptr, err] {std::to_chars(buf, buf + 64, std::rand())};
        if (err == std::errc()) { // 表示无异常
            *ptr = 0;
            std::cout << buf << std::endl;
        }
        else {
            std::cout << "err" << std::endl;
        }
    }
}