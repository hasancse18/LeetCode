class Solution {
public:
    int numberOfSpecialChars(string word) {
                int c=0;
        map<char,int>low,up;
       
        for(auto it:word)
        {
            if(islower(it)) low[it]++;
            else up[it]++;
        }
        //int c=0;
        for(auto it:up)
        {
            if(low.find(tolower(it.first))!=low.end()) c++;
        }
        return c;
    }
};