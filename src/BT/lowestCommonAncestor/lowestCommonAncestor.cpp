//
// Created by zhouhua on 2021/3/24.
//

#include "BT/lowestCommonAncestor/lowestCommonAncestor.hpp"
//#include "lowestCommonAncestor.hpp"
CommonAncestor::TreeNode* CommonAncestor::lowestCommonAncestor(CommonAncestor::TreeNode *root, int x, int y) {
    if (!root || root->val == x || root->val == y) return root;

    TreeNode* left_root = lowestCommonAncestor(root->left, x, y);
    TreeNode* right_root = lowestCommonAncestor(root->right,x, y);

    if (left_root && right_root) return root;
    if (left_root && !right_root) return left_root;
    else if (!left_root && right_root) return right_root;
    else {
        return NULL;
    }
}

CommonAncestor::TreeNode* CommonAncestor::createTree(vector<int> &arr) {
    if (arr.empty()) return NULL;
    TreeNode* node;
    int max_val = INT_MIN, max_id;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_id = i;
        }
    }
    node = new TreeNode(max_val);
    vector<int> new_left_arr(arr.begin(), arr.begin() + max_id);
    node->left = createTree(new_left_arr);
    vector<int> new_right_arr(arr.begin() + max_id + 1, arr.end());
    node->right = createTree(new_right_arr);
    return node;
}

int main() {
    vector<int> arr{1,2,5,3,9,11,8,7,6};
    CommonAncestor m_fun;
    CommonAncestor::TreeNode* root = m_fun.createTree(arr);
    CommonAncestor::TreeNode* result = m_fun.lowestCommonAncestor(root, 5,9);
    cout << result->val << endl;
}



