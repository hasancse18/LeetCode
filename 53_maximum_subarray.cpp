#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int s=0;
        int m= INT_MIN;
        for(auto it:nums)
        {
            s+=it;
            m=max(s,m);
            if(s<0)
            {
                s=0;
            }
        }
        return m;
    }
int main()
{

}