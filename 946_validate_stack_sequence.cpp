#include<bits/stdc++.h>
using namespace std;
 bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int>st;
        int j=0;
        for(auto it:pushed)
        {
            //st.push(it);
            if(it!=popped[j])
            {
                st.push(it);
            }
            else
            {
                j++;
                while(!st.empty() && popped[j]==st.top())
                {
                    j++;
                    st.pop();
                }
            }
        }
        return st.empty();
    }