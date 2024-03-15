int numIdenticalPairs(vector<int>& v) {
        sort(v.begin(),v.end());
        int i,j=1,c=0;
        int n=v.size();
        for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            {
                c++;
            }

        }

        return c;
    }