 #include<bits/stdc++.h>
 using namespace std;

 vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>vl(n,1),vr(n,1);
        int i,j;
        for(i=1;i<n;i++)
        {
            j=n-i;
            vl[i]=vl[i-1]*nums[i-1];
            vr[j-1]=vr[j]*nums[j];
        }
        for(i=0;i<n;i++)
        {
            nums[i]=vl[i]*vr[i];
        }
        return nums;
    }
    int main()
    {
        
    }