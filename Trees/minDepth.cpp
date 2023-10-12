/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* root) {
    if(root == NULL) return 0;
    int x = minDepth(root->left);
    int y = minDepth(root->right);
    if(x==0 || y==0) return max(x,y)+1;
    return min(x,y) + 1;
}
