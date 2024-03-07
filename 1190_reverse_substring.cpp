#include<bits/stdc++.h>
using namespace std;
 string reverseParentheses(string s) {
        stack<int>st;
        string ans="";
        int n=s.size();
        int o,c;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                reverse(s.begin()+st.top(),s.begin()+i);
                st.pop();
            }
        }
        for(auto it:s)
        {
            if(isalpha(it))
            {
                ans+=it;
            }
        }
        return ans;
    }
int main()
{

}