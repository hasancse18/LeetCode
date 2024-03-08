#include<bits/stdc++.h>
using namespace std;
int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        vector<int>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        int x=v[n-1];
        int c=0;
        for(auto it:v)
        {
            if(it==x)c++;
        }
        return c*x;
    }
int main()
{

}