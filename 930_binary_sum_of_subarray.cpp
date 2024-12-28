class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int>mp;
        int ans =0;
        mp[0]++;
        int sum=0;
        for(auto it: nums)
        {
            sum+=it;
            if(mp.find(sum-goal)!=mp.end())
            {
                ans+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return ans;
    }

};