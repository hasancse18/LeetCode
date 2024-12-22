class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //int i=0;
        int sum=0,ans=0,l=0;
       
        for(int i=0;i<arr.size();i++ )
        {
            sum+=arr[i];
            if(i-l+1==k)
            {
                if((sum/k)>=threshold)
                {
                    ans++;
                }
                sum-=arr[l];
                l++;
                //i++;
            }
           
        }
        //  if((sum/k)>=threshold)
        //     {
        //         ans++;
        //     }
        return ans;
    }
};