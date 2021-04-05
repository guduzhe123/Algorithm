//
// Created by zhouhua on 2021/3/26.
//

#include "../../../inc/BT/InsertTree/InsertTree.hpp"

InsertTree::TreeNode *InsertTree::insertIntoBST(InsertTree::TreeNode *root, int val) {
    if (root == NULL) {
        TreeNode* node = new TreeNode(val);
        return node;
    }
    if (root->val > val) root->left = insertIntoBST(root->left, val); // insert the val at this root's left
    if (root->val < val) root->right = insertIntoBST(root->right, val); // insert the val at this root's right
    return root;
}

void InsertTree::insertIntoBST2(InsertTree::TreeNode *root, int val) {
    if (root == NULL) {
        TreeNode* node = new TreeNode(val);
        if (pre->val > val) pre->left = node;
        if (pre->val < val) pre->right = node;
        return;
    }
    pre = root;
    if (root->val > val) insertIntoBST2(root->left, val);
    if (root->val < val) insertIntoBST2(root->right, val);
}

InsertTree::TreeNode * InsertTree::insertIntoBST3(InsertTree::TreeNode *root, int val) {
    if (root == NULL) {
        TreeNode* node = new TreeNode(val);
        return node;
    }
    TreeNode* pre;
    TreeNode* cur = root;
    while (cur) {
        pre = cur;
        if (cur->val > val) cur = cur->left;
        else if (cur->val < val) cur = cur->right;
    }
    if (pre->val > val) pre->left = new TreeNode(val);
    else pre->right = new TreeNode(val);
    return root;
}

InsertTree::TreeNode* InsertTree::leftOrder(TreeNode* root) {
    if (root == NULL) return pre_node;
    pre_node = root;
    leftOrder(root->left);
}

InsertTree::TreeNode* InsertTree::deleteNode(TreeNode* root, int val) {
    if (root == NULL) return root;
    if (root->val == val) {
        if (!root->left) return root->right;
        else if (!root->right) return root->left;
        else if (root->left && root->right) {
            TreeNode* right = root->right;
            TreeNode* node = root->right;
            TreeNode* end_node = leftOrder(node);
            end_node->left = root->left;
            return right;
        }

        if (root->val > val) root->left = deleteNode(root->left, val);
        if (root->val < val) root->right = deleteNode(root->right, val);
        return root;
    }
}

int main() {
    InsertTree m_fun;
    InsertTree::TreeNode* m_tree;
    m_tree = new InsertTree::TreeNode(5);
    m_tree->left = new InsertTree::TreeNode(3);
    m_tree->right = new InsertTree::TreeNode(8);

    m_tree->left->left = new InsertTree::TreeNode(2);
    m_tree->left->right = new InsertTree::TreeNode(4);

    m_tree->right->left = new InsertTree::TreeNode(6);
    m_tree->right->right = new InsertTree::TreeNode(9);

    //m_fun.insertIntoBST(m_tree, 1);
    //m_fun.insertIntoBST2(m_tree, 1);
    //m_fun.insertIntoBST3(m_tree, 1);
    InsertTree::TreeNode*node = m_fun.deleteNode(m_tree, 5);
    m_fun.insertIntoBST2(m_tree, 1);

}


