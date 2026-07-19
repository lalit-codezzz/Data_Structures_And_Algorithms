vector<vector<long long>> levelOrder(TreeNode* root) {
    
    vector<vector<long long>> res;
    
    if (root == NULL) {
        return res;
    }
    
    queue<TreeNode*> q;
    q.push(root);
    
    while(!q.empty()) {
        
        int size = q.size();
        vector<long long> tmp;
        
        for (int i = 1; i <= size; ++i) {
            
            TreeNode* ele = q.front();
            q.pop();
            
            tmp.push_back(ele->val);
            
            if (ele->left != NULL) q.push(ele->left);
            if (ele->right != NULL) q.push(ele->right);
            
        }
        res.push_back(tmp);
    }
    return res;
}
