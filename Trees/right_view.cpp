/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void right(TreeNode* root, int lev, vector<int>& ans){
    if(root == NULL) return;
    if(ans.size() == lev) ans.push_back(root->val);
    right(root->right, lev+1, ans);
    right(root->left, lev+1, ans);
} 
 
vector<int> Solution::solve(TreeNode* root) {
    vector<int> ans;
    if(root == NULL) return ans;
    int lev = 0;
    right(root, lev, ans);
    return ans;
}
