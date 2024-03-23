#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag = true;
        while(!q.empty())
        {
           
            int n= q.size();
             vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                int index= flag? i: n-i-1;
                TreeNode* node = q.front();
                q.pop();
                v[index]=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(v);
            flag = !flag;
        }
        return ans;
    }
int main()
{

}