#include<bits/stdc++.h>
using namespace std;
string customSortString(string order, string s) {
        string ans="";
        string r="";
        map<char,int>mp;
        for(auto it:s)
        {
            if(find(order.begin(),order.end(),it)==order.end())
            {
                r+=it;
            }
            mp[it]++;
        }
        for(auto it:order)
        {
            int n=mp[it];
            for(int i=0;i<n;i++)
            {
                ans+=it;
            }
        }
        return ans+r;
    }
int main()
{

}