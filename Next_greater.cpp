#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int>ans;
    for(int i=0;i<v.size()-1;i++)
    {
        int k=0;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]<v[j])
            {
                k=1;
                ans.push_back(v[j]);
                break;
            }
        }
        if(k==0)
        {
            ans.push_back(-1);
        }
    }
    ans.push_back(-1);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}