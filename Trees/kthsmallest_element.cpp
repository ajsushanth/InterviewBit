/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void smallest(TreeNode* root, int& k, int& ans){
    if(root == NULL) return;
    smallest(root->left, k, ans);
    k--;
    if(k == 0){
        ans = root->val;
        return;
    }
    smallest(root->right, k, ans);
}
 
int Solution::kthsmallest(TreeNode* root, int k) {
    int ans = -1;
    smallest(root, k, ans);
    return ans;
}