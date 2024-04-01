class Solution {
public:
    void solve(vector<string>& ans,TreeNode* root,string s)
    {
        if(root==NULL) 
        {
            return;
        }
         
        s+=to_string(root->val);
         s+="->";
        if(root->left==NULL && root->right==NULL)
            {
               s.pop_back();
               s.pop_back();
                ans.push_back(s);
                return;
            }
       
        solve(ans,root->left,s);
        solve(ans,root->right,s);
 
        


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        solve(ans,root,s);
        return ans;
    }
};