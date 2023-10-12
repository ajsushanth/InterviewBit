/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int target) {
    if(root == NULL) return 0;
    if(target - root->val == 0 && root->left == NULL && root->right == NULL) return 1;
    return hasPathSum(root->left, target - root->val) || hasPathSum(root->right, target - root->val);
}
