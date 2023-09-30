/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int> ans;
    if(root == NULL) return ans;
    stack<TreeNode* >st;
    while(1){
        if(root != NULL){
            st.push(root);
            root = root->left;
        }
        else{
            if(st.empty()) break;
            root = st.top();
            ans.push_back(root->val);
            st.pop();
            root = root->right;
        }
    }
    return ans;
}
