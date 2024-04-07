    int t[101][101];
    bool solve(int i,int o,int n,string s)
    {
        if(i==n)
        {
            return o==0;
        }
        if(t[i][o]!=-1)
        {
            return t[i][o];
        }
        bool check= false;
        if(s[i]=='(')
        {
           check|= solve(i+1,o+1,n,s);
        }
        else if(s[i]=='*')
        {
           check|= solve(i+1,o+1,n,s);
            check|=solve(i+1,o,n,s);
            if(o>0)
            {
                check|=solve(i+1,o-1,n,s);
            }
        }
        else if(o>0)
        {
            check|=solve(i+1,o-1,n,s);
        }
        return t[i][o]=check;
    }
    bool checkValidString(string s) {
        int n= s.length();
        memset(t,-1,sizeof(t));
        return solve(0,0,n,s);
    }