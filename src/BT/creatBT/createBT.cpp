//
// Created by zhouhua on 2021/3/23.
//
#include "../../../inc/BT/createBT/createBT.hpp"


CreateBT::TreeNode* CreateBT::createBT(vector<int>& inOrder, vector<int> &postOrder) {
    if (postOrder.empty()) return NULL;
    int max_post = postOrder[postOrder.size() - 1];
    TreeNode* node = new TreeNode(max_post);
    int max_id;
    for (int i = 0; i < inOrder.size(); i++) {
        if (inOrder[i] == max_post) {
            max_id = i;
            break;
        }
    }
    vector<int> new_inOrder_l(inOrder.begin(), inOrder.begin() + max_id);
    vector<int> new_postOrder_l(postOrder.begin(), postOrder.begin() + max_id);
    node->left = createBT(new_inOrder_l, new_postOrder_l);

    vector<int> new_inOrder_r(inOrder.begin() + max_id + 1, inOrder.end());
    vector<int> new_postOrder_r(postOrder.begin() + max_id, postOrder.end() - 1);
    node->right = createBT(new_inOrder_r, new_postOrder_r);
    return node;
}

CreateBT::TreeNode *CreateBT::creatTree(vector<int> &arr, int start, int end) {
    if (start >= end) return NULL;
    int max_val = INT_MIN;
    int max_id;
    for (int i = start; i < end; i++) {
//        cout << i << endl;
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_id = i;
        }
    }
    TreeNode* node = new TreeNode(max_val);
    node->left = creatTree(arr, start, max_id);
    node->right = creatTree(arr, max_id + 1, end);
    return node;
}

void CreateBT::inOrdor(CreateBT::TreeNode *root, vector<int> &res) {
    if (!root) return;
    inOrdor(root->left, res);
    res.push_back(root->val);
    inOrdor(root->right, res);
}

void CreateBT::postOrdor(CreateBT::TreeNode *root, vector<int> &res) {
    if (!root) return;
    postOrdor(root->left, res);
    postOrdor(root->right, res);
    res.push_back(root->val);
}

int main() {
    vector<int> arr = {1,3,2,5,1,4,3};
    CreateBT m_fun;
    CreateBT::TreeNode* m_tree;
    m_tree = m_fun.creatTree(arr, 0, arr.size());

    vector<int> in_order, post_order;
    m_fun.inOrdor(m_tree, in_order);
    m_fun.postOrdor(m_tree, post_order);
    CreateBT::TreeNode* result = m_fun.createBT(in_order, post_order);
    cout << result->val << endl;

}
