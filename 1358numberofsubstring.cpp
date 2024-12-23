class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=-1,b=-1,c=-1;
        int ans=0;
        int n= s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a') a=i;
            else if(s[i]=='b') b=i;
            else c=i;
            if(a!=-1 && b!=-1 && c!=-1)
            {
                int x = min(a,b);
                x=min(x,c);
                ans+=1+x;
            }
        }
        return ans;
    }
};