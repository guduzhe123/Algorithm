//
// Created by zhouhua on 2020/5/3.
//

#ifndef ALGORITHM_PRIORITY_QUEUE_HPP
#define ALGORITHM_PRIORITY_QUEUE_HPP

#include <vector>
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;
class PriorityQueue {
public:
    int minimumTotal(vector<vector<int>>& triangle);

    struct cmp1 {
        bool operator () (int &a, int&b) {
            return a > b;
        }
    };
    struct cmp2 {
        bool operator() (int& a, int&b) {
            return a < b;
        }
    };

    struct number1 {
        int x;
        bool operator < (const number1& a) const {
            return x > a.x;
        }
    };

    struct number2 {
        int x;
        bool operator > (const number2& a) const {
            return x < a.x;
        }
    };

    int a[12] = {14,10,56,7,83,22,36,91,3,47,72,0};
    number1 num1;
    number2 num2;

    void myFunction();
};


#endif //ALGORITHM_PRIORITY_QUEUE_HPP
