class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n= s.size();
        int l=0,ans=0,z=0,o=0;
        for(int i=0;i<n;i++)
        {
           s[i]=='0'?o++:z++;
           while(z>k&& o>k)
           {
            s[l]=='0'? o--:z--;
            l++;
           }

           ans +=i-l+1;
        }
        return ans;
    }
};