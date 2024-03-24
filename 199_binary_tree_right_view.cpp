void solve(vector<int>&v,TreeNode* node ,int l)
    {
        if(node == NULL)
        {
            return;
        }
        if(l==v.size())
        {
            v.push_back(node->val);
        }
        solve(v,node->right,l+1);
        solve(v,node->left,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        solve(ans,root,0);
        return ans;
    }