class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>low,up;
        int c=0;
        int n= word.size();
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
            {
                if(up.find(word[i])==up.end())
                {
                    up[word[i]]=i;
                }
            }
            else low[word[i]]=i;
        }
        for(auto it:low)
        {
            if(up.find(toupper(it.first))!=up.end())
            {
                if(low[it.first]<up[toupper(it.first)]) c++;
            }
        }
        return c;

    }
};