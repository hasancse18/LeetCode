#include<bits/stdc++.h>
using namespace std;
    int minSwaps(string s) {
        stack<char>st;
        for(auto it:s)
        {
            if(it=='[')
            {
                st.push(it);
            }
            else if(it==']' && !st.empty() && st.top()=='[')
            {
                st.pop();
            }
        }
        int ans=st.size()+1;
        return ans/2;
    }
int main()
{
    string s;
    cin>>s;
    cout<<minSwaps(s);

}