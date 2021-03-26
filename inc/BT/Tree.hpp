//
// Created by zhouhua on 2020/3/11.
//

#ifndef UNTITLED_TREE_HPP
#define UNTITLED_TREE_HPP
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <hash_map>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Tree {
public:

//Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

/*102. 二叉树的层次遍历
 * 给定一个二叉树，返回其按层次遍历的节点值。 （即逐层地，从左到右访问所有节点）。
例如:
给定二叉树: [3,9,20,null,null,15,7],*/
    vector<vector<int>> levelOrder(TreeNode* root);
    void run_tree();
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
    TreeNode* recur(int pre_left, int pre_right, int in_left, int in_right);

    map<int, int> my_map;
    vector<int> poc;
};
#endif //UNTITLED_TREE_HPP
