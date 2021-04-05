//
// Created by zhouhua on 2021/3/31.
//

#include "../../../inc/BackStep/findSubsequences.hpp"

vector<vector<int>> SubSq::findSubsequences(vector<int>& nums) {
    backStep(nums, 0);
    return result;
}

void SubSq::backStep(vector<int>& nums, int startIndex) {
    if (path.size() > 1) {
        result.push_back(path);
//        return;
    }
    int used[201] = {0};
    for (int i = startIndex; i < nums.size(); i++) {
        if ((!path.empty() && nums[i] < path.back()) || used[nums[i] + 100] == 1) continue;
        else {
            used[nums[i] +100] = 1;
            path.push_back(nums[i]);
            backStep(nums, i+1);
            path.pop_back();
        }
    }
}

int main() {
    SubSq m_fun;
    vector<int> nums = {4,6,7,7};
    m_fun.findSubsequences(nums);

}