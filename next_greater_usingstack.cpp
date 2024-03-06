#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int>ans;
    stack<int>st;
    reverse(v.begin(),v.end());
    st.push(v[0]);
    ans.push_back(-1);
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>v[i])
        {
            st.push(v[i-1]);
            ans.push_back(st.top());
        }
        else
        {
            while(st.top()<=v[i])
            {
                st.pop();
                if(st.empty())
                {
                    ans.push_back(-1);
                    st.push(v[i]);
                    break;
                }
            }
            if(v[i]!=st.top())
            {
                ans.push_back(st.top());
                st.push(v[i]);
            }

        }
    }
    reverse(ans.begin(),ans.end());
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}