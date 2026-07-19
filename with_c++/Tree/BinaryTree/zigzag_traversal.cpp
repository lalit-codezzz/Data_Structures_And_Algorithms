vector<vector<long long>> zigzagLevelOrder(TreeNode* root) {
    
    vector<vector<long long>> res;
    if (root == NULL) return res;
    
    queue<TreeNode*> q;
    q.push(root);
    
    int lvl = 0;
    
    while(!q.empty()) {
        
        int size = q.size();
        vector<long long> tmp;
        lvl++;
        for (int i = 1; i <= size; ++i) {
            
            TreeNode* ele = q.front();
            q.pop();
            
            tmp.push_back(ele->val);
            
            if (ele->left != NULL) q.push(ele->left);
            if (ele->right != NULL) q.push(ele->right);
            
            
        }
        if (lvl % 2 == 0) {
            reverse(tmp.begin(), tmp.end());  
        }
        
        res.push_back(tmp);
        
    }
    return res;
}
