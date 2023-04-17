//
// Created by 57856 on 2023/4/17.
//

#ifndef CPP2023_RETURNREF_H
#define CPP2023_RETURNREF_H

#include <vector>
#include <memory>
#include <optional>

namespace code2 {
    template<typename T>
    class ReturnRef {
    public:
        void resize(size_t);

        void add(const T &);

        void add(T &&);

        const std::optional<T> &operator[](size_t) const;

    private:
        std::vector<std::optional<T>> v;
    };
}

namespace code2 {
    template<typename T>
    void ReturnRef<T>::resize(size_t sz) {
        this->v.resize(sz);
    }

    template<typename T>
    void ReturnRef<T>::add(T &&t) {
        this->v.push_back(std::move(t));
    }

    template<typename T>
    void ReturnRef<T>::add(const T &t) {
        this->v.push_back(t);
    }

    template<typename T>
    const std::optional<T> &ReturnRef<T>::operator[](size_t i) const {
        return this->v[i];
    }
}

#endif //CPP2023_RETURNREF_H
