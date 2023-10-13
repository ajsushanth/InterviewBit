/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void add(TreeNode* root, int num, int& sum){
    if(root == NULL) return;
    num = (num*10 + root->val)%1003;
    if(root->left==NULL && root->right==NULL){
        sum += num;
        sum = sum%1003;
        return;
    }
    add(root->left, num, sum);
    add(root->right, num, sum);
} 

int Solution::sumNumbers(TreeNode* root) {
    int sum = 0;
    int num = 0;
    add(root, num, sum);
    return sum%1003;
}