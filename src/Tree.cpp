//
// Created by zhouhua on 2020/3/11.
//

#include "../inc/Tree.hpp"

vector<vector<int>> Tree::levelOrder(TreeNode* root){
    vector<vector<int>> result;
    if (root == NULL) return result;

    queue<TreeNode*> node;
    node.push(root);
    TreeNode* cur_node;
    while(!node.empty()) {
        int size = node.size();
        vector<int> cur;
        for (int i = 0; i < size; i++) {
            cur_node = node.front();
            node.pop();
            cur.push_back(cur_node->val);

            if(cur_node->left != NULL) node.push(cur_node->left);
            if(cur_node->right != NULL) node.push(cur_node->right);
        }
        result.push_back(cur);
    }
    return result;
}

void Tree::run_tree () {
    TreeNode* root;
    root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    levelOrder(root);
}