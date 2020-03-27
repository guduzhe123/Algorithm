//
// Created by zhouhua on 2020/3/19.
//

#ifndef UNTITLED_STOCK_HPP
#define UNTITLED_STOCK_HPP

#include <iostream>
#include "vector"
#include "limits.h"
using namespace std;

class stock {
public:
    stock() {};
    ~stock() {};

    void run_stock();
    int maxProfit(vector<int>& prices);
};
#endif //UNTITLED_STOCK_HPP
