    int findMaxLength(vector<int>& nums) {
        map<int,int>mp;
        int m=0;
        int n=nums.size();
        mp[0]=-1;
        int s=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) s++;
            else s--;
            if(mp.find(s)!=mp.end())
            {
                m= max(m,i-mp[s]);
            }
            else
            {
                mp[s] =i;
            }
        }
        return m;
    }