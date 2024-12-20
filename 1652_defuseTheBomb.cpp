class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n= code.size();
        vector<int>ans;
        bool f=false;
        if(k<0)
        {
            reverse(code.begin(),code.end());
            k=k*(-1);
            f=true;
        }
        if(k==0)
        {
            vector<int>ans(n,0);
            return ans;
        }
        int c=k,s=0;
        for(int i=1;i<=k;i++)
        {
            s+=code[i];
        }
        ans.push_back(s);
        for(int i=1;i<(2*n);i++)
        {
            s-=code[i%n];
            c++;
            s+=code[c%n];   
            ans.push_back(s);
            if(ans.size()==n)
            {
                break;
            }
        }
       if(f) reverse(ans.begin(),ans.end());
        return ans;
    }
};