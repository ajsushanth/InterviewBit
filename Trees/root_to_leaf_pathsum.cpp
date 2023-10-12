/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void route(TreeNode* root, int target, vector<int>line, vector<vector<int>>& path){
    if(root == NULL) return;
    if(root->left==NULL && root->right==NULL && target==root->val){
        line.push_back(root->val);
        path.push_back(line);
    }
    line.push_back(root->val);
    route(root->left, target - root->val, line, path);
    route(root->right, target - root->val, line, path);
    line.push_back(root->val);
}
 
vector<vector<int> > Solution::pathSum(TreeNode* root, int target) {
    vector<vector<int>> path;
    vector<int> line;
    route(root, target, line, path);
    return path;
}
