int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int s=0;
        int ans=0;
        mp[0]++;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(mp.find(s-k)!=mp.end())
            {
                ans+=mp[s-k];
            }
            mp[s]++;
        }
        return ans;
    }