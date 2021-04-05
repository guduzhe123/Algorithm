//
// Created by zhouhua on 2021/3/31.
//

#ifndef ALGORITHM_PERMUTE_HPP
#define ALGORITHM_PERMUTE_HPP

#include <iostream>
#include <vector>

using namespace std;

class Permute {
public:
    void backStep(vector<int> &nums, vector<int> &used);

    vector<vector<int>> permute(vector<int>& nums);

private:
    vector<int> path;
    vector<vector<int>> result;
};

#endif //ALGORITHM_PERMUTE_HPP
