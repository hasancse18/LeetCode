class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0,x=0,y=1;
        int one =0,zero=0;
        //nums.push_back(5);
        int i=0,n=nums.size();
        
        for(int j=0;j<n-2;j++)
        {
            if(!nums[j])
            {
                nums[j]=1;
                nums[j+1]=1-nums[j+1];
                nums[j+2]= 1- nums[j+2];
                ans++;
            }
            
           
        }
        if(count(nums.begin(),nums.end(),0)) return -1;
        return ans;
    }
};