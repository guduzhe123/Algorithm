//
// Created by zhouhua on 2020/3/8.
//

#ifndef UNTITLED_FIND_ALGORITHM_HPP
#define UNTITLED_FIND_ALGORITHM_HPP

#include <iostream>
#include "vector"
using namespace std;
class Find_algorithm {
public:
    Find_algorithm() = default;
    ~Find_algorithm() = default;
/*35. 搜索插入位置
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。*/
    int searchInsert(vector<int>& nums, int target);
    void run_search();
};

#endif //UNTITLED_FIND_ALGORITHM_HPP
