//
// Created by zhouhua on 2021/3/31.
//

#ifndef ALGORITHM_FINDSUBSEQUENCES_HPP
#define ALGORITHM_FINDSUBSEQUENCES_HPP

#include <iostream>
#include <vector>
using namespace std;

class SubSq {
public:
    void backStep(vector<int>& nums, int index);

    vector<vector<int>> findSubsequences(vector<int>& nums);

private:

    vector<int> path;
    vector<vector<int>> result;
};
#endif //ALGORITHM_FINDSUBSEQUENCES_HPP
