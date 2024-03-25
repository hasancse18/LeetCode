int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;

        queue<pair<TreeNode*,long long >>q;
        q.push({root,0});
        int ans=0;
        while(!q.empty())
        {
            int first,last;
            int n= q.size();
            int m=q.front().second;
           for(int i=0;i<n;i++)
            {
                long long cur = q.front().second-m;
                TreeNode* node = q.front().first;
                if(i==0) first=q.front().second;
                if(i==n-1) last=q.front().second;
                if(node->left)
                {
                    q.push({node->left,((2*cur)+1)});
                }
                if(node->right)
                {
                    q.push({node->right,(2*cur)+2});
                }
                q.pop();
            }
            ans =max(ans,last-first+1);
        }
        return ans;
    }