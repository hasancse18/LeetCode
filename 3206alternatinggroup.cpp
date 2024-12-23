class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int n= colors.size(),ans=0;
        colors.push_back(colors[0]);
        for(int i=0;i<n-1;i++)
        {
            if(i==0)
            {
                if(colors[n-1]==colors[1] && colors[0]!=colors[1])
                {
                    ans++;
                }
            }

           
            if(colors[i]==colors[i+2] && colors[i]!=colors[i+1] )
            {
                ans++;
            }
            

        }
        return ans;
    }
};