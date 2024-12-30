class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>mp;
        int n= s.size(),m=0,l=0;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            while(mp[s[i]]>2)
            {
                mp[s[l]]--;
                l++;
            }
            m= max(m,i-l+1);
        }
        return m;
    }
};