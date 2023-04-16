//
// Created by 57856 on 2023/4/16.
//


#include <utility>
#include <iostream>

class SwapAssignCls {
public:
    SwapAssignCls(int val = 0);

    ~SwapAssignCls();

    SwapAssignCls(const SwapAssignCls &s);

    SwapAssignCls(SwapAssignCls &&s);

    SwapAssignCls &operator=(const SwapAssignCls &s);

    SwapAssignCls &operator=(SwapAssignCls &&s) noexcept;

    void swap(SwapAssignCls &s) noexcept;

    void print() const;

public:
    int *p;
};

