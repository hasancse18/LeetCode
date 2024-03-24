    bool sym(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        if(p!=NULL && q==NULL)
            return false;
        if(p==NULL && q!=NULL)
            return false;
        


        bool lefts=sym(p->left,q->right);
        bool rights =sym(p->right,q->left);
        bool check = p->val==q->val;
        if(lefts && rights && check)
            return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
      bool check= sym(root->left,root->right);
      if(check)
        return true;

      return false;
    }