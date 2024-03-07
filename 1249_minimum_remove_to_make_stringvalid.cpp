#include<bits/stdc++.h>
using namespace std;
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        int n=s.size();
        string ans="";
        map<int,char>mp;
        for(int i=0;i<n;i++)
        {
            mp.insert({i,s[i]});
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(!st.empty() && s[st.top()]=='(' )
                {
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }
        }

        string str="";
        while(!st.empty())
        {
            mp.erase(st.top());
            st.pop();
        }

        for(auto it:mp)
        {
            str+=it.second;
        }
        return str;
    }
int main()
{

}