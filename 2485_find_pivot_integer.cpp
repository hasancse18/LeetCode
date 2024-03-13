int pivotInteger(int n) {
        if(n==1)
        {
            return 1;
        }
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        int l=0;
        for(int i=0;i<=n;i++)
        {
            l+=i;
            int x=sum-l+i;
             
            if(x==l)
            {
                return i;
            }
           
        }
        return -1;
    }