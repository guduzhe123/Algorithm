//
// Created by zhouhua on 2021/3/31.
//

#include "../../../inc/BackStep/permute.hpp"

void Permute::backStep(vector<int> &nums, vector<int> &used) {
    if (path.size() == nums.size()) {
        result.push_back(path);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (used[i] == 1) continue;
        path.push_back(nums[i]);
        used[i] = 1;
        backStep(nums, used);
        path.pop_back();
        used[i] = 0;
    }
}

vector<vector<int>> Permute::permute(vector<int> &nums) {
    vector<int> used(nums.size(), 0);
    backStep(nums, used);
    return result;
}

int main() {
    Permute m_fun;
    vector<int> nums = {1,2,3};
    m_fun.permute(nums);
}