/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void path(TreeNode* root, int k, vector<int> ans, vector<vector<int>>& res){
    if(root == NULL) return;
    if(root->val == k){
        ans.push_back(root->val);
        res.push_back(ans);
        return;
    }
    ans.push_back(root->val);
    path(root->left, k, ans, res);
    path(root->right, k, ans, res);
    ans.push_back(root->val);
}
 
vector<int> Solution::solve(TreeNode* root, int k) {
    vector<int> ans;
    vector<vector<int>> res;
    path(root, k, ans, res);
    return res[0];
}
