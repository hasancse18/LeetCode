class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;
        int n=nums.size();
        int c=0,z=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            if(z>1)
            {
                if(nums[l]==0)
                {
                    z--;
                }
                l++;
            }
            int len=i-l+1-z;
            c=max(c,len);
        }
        if(n==c)
            return c-1;
        return c;
        
    }
};