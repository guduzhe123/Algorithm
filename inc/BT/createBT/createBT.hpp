//
// Created by zhouhua on 2021/3/23.
//

#ifndef ALGORITHM_CREATEBT_HPP
#define ALGORITHM_CREATEBT_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

//https://leetcode-cn.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
//106. 从中序与后序遍历序列构造二叉树
class CreateBT {
public:
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {};
    };

    TreeNode* createBT(vector<int>& inOrder, vector<int>& postOrder);
    TreeNode* creatTree(vector<int>& arr, int start, int end);

    void inOrdor(TreeNode* root, vector<int>& res);
    void postOrdor(TreeNode* root, vector<int>& res);
};
#endif //ALGORITHM_CREATEBT_HPP
