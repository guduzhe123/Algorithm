//
// Created by zhouhua on 2021/3/23.
//

#ifndef ALGORITHM_PATH_HPP
#define ALGORITHM_PATH_HPP

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class path {

public:
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {};
    };
    bool hasPathSum(TreeNode* root, int sum);

    TreeNode* creatTree(vector<int>& arr);


private:
    TreeNode* root_;
};


#endif //ALGORITHM_PATH_HPP
