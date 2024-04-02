class Solution {
public:
   void solve(int &sum,bool s,TreeNode* root)
    {
        if(root==NULL) return;
        if(s && root->left==NULL && root->right==NULL)
        {
            sum+=root->val;
            return;
        }
        solve(sum,true,root->left);
        solve(sum,false,root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        solve(sum,false,root);
        return sum;
    }
};