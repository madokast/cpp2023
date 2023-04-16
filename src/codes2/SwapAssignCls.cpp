//
// Created by 57856 on 2023/4/16.
//


#include <utility>
#include <iostream>
#include "SwapAssignCls.h"

SwapAssignCls::SwapAssignCls(int val) : p(new int{val}) {}

SwapAssignCls::~SwapAssignCls() {
    if (p != nullptr) {
        delete p;
        p = nullptr;
    }
}

SwapAssignCls::SwapAssignCls(const SwapAssignCls &s) : p(new int{*s.p}) {
    std::cout << "copy &" << std::endl;
}

SwapAssignCls::SwapAssignCls(SwapAssignCls &&s) : p(s.p) {
    std::cout << "copy &&" << std::endl;
    s.p = nullptr;
}

SwapAssignCls &SwapAssignCls::operator=(const SwapAssignCls &s) {
    std::cout << "=&" << std::endl;
    if (this != &s) {
        SwapAssignCls temp{s};
        this->swap(temp);
    }
    return *this;
}

SwapAssignCls &SwapAssignCls::operator=(SwapAssignCls &&s) noexcept {
    std::cout << "=&&" << std::endl;
    this->swap(s);
    s.p = nullptr;
    return *this;
}

void SwapAssignCls::swap(SwapAssignCls &s) noexcept {
    if (this != &s) {
        std::swap(p, s.p);
    }
}

void SwapAssignCls::print() const {
    if (p == nullptr) {
        std::cout << "null" << std::endl;
    }
    std::cout << *p << std::endl;
}

