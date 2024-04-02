class Solution {
public:
    int solve(TreeNode* root,int &tilt)
    {
        if(!root) return 0;
        int l= solve(root->left,tilt);
        int r= solve(root->right,tilt);
        tilt+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        int tilt=0;
        int ti=solve(root,tilt);
        
        return tilt;
    }
};