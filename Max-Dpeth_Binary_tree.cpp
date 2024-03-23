#include<bits/stdc++.h>
using namespace std;
int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        int h=max(left,right)+1;
        return h;
    }
int main()
{

}