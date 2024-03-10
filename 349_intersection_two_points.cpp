#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       map<int,int>mp;
       for(auto it:nums1)
       {
           mp.insert({it,1});
       }
       vector<int>ans;
       for(auto it:nums2)
       {
           if(mp.find(it)!=mp.end() && mp[it]!=0)
           {
               ans.push_back(it);
               mp[it]--;
           }
       }
       return ans;
    }
int main()
{

}