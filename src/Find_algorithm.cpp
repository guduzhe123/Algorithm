//
// Created by zhouhua on 2020/3/8.
//
// 查找算法
#include "../inc/Find_algorithm.hpp"

int Find_algorithm::searchInsert(vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1;
    int mid;
    while (left <= right) {
        mid = (left + right) / 2;

        if (target > nums[mid]) {
            left = mid + 1;
        } else if (target < nums[mid]){
            right = mid - 1;
        } else {
            return mid;
        }

        cout << "mid = " << mid << ", left = " << left << ", right = " << right << endl;
    }
    return left;
}

void Find_algorithm::run_search() {
    vector<int> a = {1,3,5,7};
    int target = 2;
    int result = searchInsert(a, target);
    cout << result << endl;
}
