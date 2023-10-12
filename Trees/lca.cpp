/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool check(TreeNode* root, int k){
    if(root == NULL) return false;
    if(root->val == k) return true;
    return check(root->left, k) || check(root->right, k);
} 
 
TreeNode* ancestor(TreeNode* root, int a, int b){
    if(root == NULL) return NULL;
    if(root->val == a) return root;
    if(root->val == b) return root;
    TreeNode* left = ancestor(root->left, a, b);
    TreeNode* right = ancestor(root->right, a, b);
    if(left == NULL) return right;
    if(right == NULL) return left;
    return root;
} 
 
int Solution::lca(TreeNode* root, int a, int b) {
    bool chk = check(root, a) && check(root, b);
    if(chk == false) return -1;
    TreeNode* ans = ancestor(root, a, b);
    if(ans == NULL) return -1;
    return ans->val;
}
