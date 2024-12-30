class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

     int n= grumpy.size();
     int ans =0,l=0,c=0,x=0,f1,f2;
     for(int i=0;i<n;i++)
     {
        if(!grumpy[i]) ans+=customers[i];
     }
     x=ans;
     for(int i=0;i<minutes;i++)
     {
        if(grumpy[i]) x+=customers[i];
     }
     ans = max(x,ans);
     for(int i=minutes;i<n;i++)
     {
        if(grumpy[l]) x-=customers[l];
        if(grumpy[i]) x+=customers[i];
        l++;
        ans = max(ans,x);
     }
     return ans;

    }
};