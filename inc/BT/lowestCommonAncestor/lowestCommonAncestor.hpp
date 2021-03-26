//
// Created by zhouhua on 2021/3/24.
//

#ifndef ALGORITHM_LOWESTCOMMONANCESTOR_HPP
#define ALGORITHM_LOWESTCOMMONANCESTOR_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;
class CommonAncestor {
public:
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {};
    };
    TreeNode* lowestCommonAncestor(TreeNode* root, int x, int y);
    TreeNode* createTree(vector<int>& arr);
};
#endif //ALGORITHM_LOWESTCOMMONANCESTOR_HPP
