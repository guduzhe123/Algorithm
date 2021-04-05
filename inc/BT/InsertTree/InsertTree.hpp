//
// Created by zhouhua on 2021/3/26.
//

#ifndef ALGORITHM_INSERTTREE_HPP
#define ALGORITHM_INSERTTREE_HPP

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <limits.h>

class InsertTree {
public:
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {};
    };
    TreeNode* insertIntoBST(TreeNode* root, int val);

    void insertIntoBST2(TreeNode* root, int val);
    InsertTree::TreeNode * insertIntoBST3(TreeNode* root, int val);

    InsertTree::TreeNode* deleteNode(TreeNode* root, int val);
    TreeNode* leftOrder(TreeNode* root);

private:
    TreeNode* pre;
    TreeNode* pre_node;
};

#endif //ALGORITHM_INSERTTREE_HPP
