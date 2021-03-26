//
// Created by zhouhua on 2021/3/23.
//

#include "../../../inc/BT/FindPath/path.hpp"

bool path::hasPathSum(TreeNode* root, int sum) {
    if (root == NULL) return false;
    if (!root->left && !root->right && sum == root->val) return true;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}

path::TreeNode* path::creatTree(vector<int>& arr) {
    if (arr.size() == 0) return NULL;
    int max_val = arr[0];
    int max_id = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_id = i;
        }
    }
    TreeNode* root = new TreeNode(max_val);

    if (max_id > 0) {
        vector<int> newArr(arr.begin(), arr.begin() + max_id);
        root->left = creatTree(newArr);
    }
    if (max_id < arr.size()) {
        vector<int> newArr(arr.begin() + max_id + 1, arr.end());
        root->right = creatTree(newArr);
    }
    return root;
}


int main() {
    path m_path;

    vector<int> arr;
    arr = {1,3,2,5,1,4,3};
    path::TreeNode* root;
    root = m_path.creatTree(arr);
    bool result = m_path.hasPathSum(root, 6);
    cout << "result = " << result << endl;
}