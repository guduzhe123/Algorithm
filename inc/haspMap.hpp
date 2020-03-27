//
// Created by zhouhua on 2020/3/8.
//

#ifndef UNTITLED_HASPMAP_HPP
#define UNTITLED_HASPMAP_HPP

#include <iostream>
using namespace std;

class HashMap {
public:
    HashMap() = default;
    ~HashMap() = default;

    /*13. 罗马数字转整数
     *罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
     * https://leetcode-cn.com/problems/roman-to-integer/*/
    void romanToInt(string s);
    void run_hashmap();
    void find_hash();
};
#endif //UNTITLED_HASPMAP_HPP
