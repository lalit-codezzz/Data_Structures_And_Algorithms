vector<long long> leftView(TreeNode* root) {
    
    vector<long long> res;
    if (root == NULL) return res;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()) {
        int size = q.size();
        
        for (int i = 1; i <= size; ++i) {
            
            TreeNode* ele = q.front();
            q.pop();
            
            if (i == 1) {
                res.push_back(ele->val);
            }
            
            if (ele->left != NULL) q.push(ele->left);
            if (ele->right != NULL) q.push(ele->right);
            
        }
    }
    
    return res;
}
