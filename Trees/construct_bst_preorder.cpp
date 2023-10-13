/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* TreeMaker(vector<int>& arr, int& idx, int bound){
    if(idx == arr.size() || arr[idx] > bound) return NULL;
    TreeNode* root = new TreeNode(arr[idx++]);
    root->left = TreeMaker(arr, idx, root->val);
    root->right = TreeMaker(arr, idx, bound);
    return root;
}
 
TreeNode* Solution::constructBST(vector<int> &arr) {
    int idx = 0;
    int bound = INT_MAX;
    TreeNode* root = TreeMaker(arr, idx, bound);
    return root;
}
