class Solution {
public:
    int solve(TreeNode* root,int sum)
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL)
        {
            return sum*10+root->val;
        }
        return solve(root->left,sum*10+root->val)+solve(root->right,sum*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        
        int sum=0;
        string str="";
       return solve(root,sum);
        
        
    }
};