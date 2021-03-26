//
// Created by zhouhua on 2020/3/11.
//

#include "../../inc/BT/Tree.hpp"

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



Tree::TreeNode* Tree::buildTree(vector<int>& preorder, vector<int>& inorder) {
    poc = preorder;
    __gnu_cxx::hash_map<int, int> my_hash;

    for (int i = 0; i < inorder.size(); i++) {
        my_map[inorder[i]] = i;
    }
    return recur(0, preorder.size() -1, 0, inorder.size() - 1);
}

Tree::TreeNode* Tree::recur(int pre_left, int pre_right, int in_left, int in_right) {
    if (pre_left > pre_right || in_left > in_right) return nullptr;

    int i = my_map[poc[pre_left]];
    TreeNode *root = new TreeNode(poc[pre_left]);

    root->left = recur(pre_left + 1, i - in_left + pre_left, in_left, i - 1);
    root->right = recur(i - in_left + pre_left + 1, pre_right, i + 1, in_right);
    return root;
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