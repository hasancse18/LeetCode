bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        int n= s.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(t[i])==mp.end())
            {
                mp[t[i]]=s[i];
            }
            else
            {
               if( mp[t[i]]!=s[i]) return false;
            }
        }
        mp.clear();
        for(int i=0;i<n;i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=t[i];
            }
            else
            {
               if( mp[s[i]]!=t[i]) return false;
            }
        }
        return true;
    }