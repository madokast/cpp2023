//
// Created by 57856 on 2023/4/20.
//

#ifndef CPP2023_METHOD_TEMPLATE_H
#define CPP2023_METHOD_TEMPLATE_H

#include <iostream>

namespace code3 {
    template<typename T>
    class Value {
    public:
        template<typename E>
        explicit Value(const Value<E> e) :val(static_cast<T>(e.get())) {}
        explicit Value(T _val) :val(_val) {}
        void print() {
            std::cout << val <<std::endl;
        }
        const T& get() const {return val;}
    private:
        T val;
    };
}

#endif //CPP2023_METHOD_TEMPLATE_H
