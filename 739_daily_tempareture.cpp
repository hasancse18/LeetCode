#include<bits/stdc++.h>
using namespace std;
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>st;
        int n=t.size();
        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            while( !st.empty() && t[st.top()]<=t[i] )
            {
                st.pop();
            }
            if(st.empty())
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(st.top()-i);
            }
            st.push(i);
        }
        reverse(v.begin(),v.end());
        return v;

    }
int main()
{

}