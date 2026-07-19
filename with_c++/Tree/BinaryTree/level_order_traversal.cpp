vector<long long> levelOrder(TreeNode* root) {
    vector<long long> ans;
    
    if (root == NULL) return ans;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()) {
        
        TreeNode* ele = q.front();
        q.pop();
        ans.push_back(ele->val);
        if (ele->left != NULL) {
            q.push(ele->left);
        }
        if (ele->right != NULL) {
            q.push(ele->right);
        }
        
    }
    
    return ans;
}
