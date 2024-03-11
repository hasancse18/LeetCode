#include<bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        int i=0;
        sort(happiness.begin(),happiness.end());
        reverse(happiness.begin(),happiness.end());
        for(auto it:happiness)
        {
            if(i==k)
            {
                break;
            }
            if(it-i>=0)
            {
                ans+=it-i;
            }
            else
            {
                break;
            }
            i++;
        }
        return ans;
    }
int main()
{

}