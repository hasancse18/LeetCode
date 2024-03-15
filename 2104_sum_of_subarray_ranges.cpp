vector<long long>left_mini(vector<int>nums)
    {
        vector<int>v;
        v=nums;
        stack<long long>st;
        vector<long long>ans;
        int n=nums.size();
        //st.push(-1);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && v[st.top()]>=nums[i] ) st.pop();

            if(st.empty()) ans.push_back(-1);

            else ans.push_back(st.top());

            st.push(i);
        }
        return ans;
    }

    vector<long long>right_mini(vector<int>nums)
    {
         vector<int>v;
        v=nums;
        stack<long long>st;
        vector<long long>ans;
        int n=nums.size();
        //st.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && v[st.top()]>nums[i] ) st.pop();

            if(st.empty()) ans.push_back(n);

            else ans.push_back(st.top());

            st.push(i);
        }
         reverse(ans.begin(),ans.end());

         return ans;
    }

    vector<long long>left_max(vector<int>nums)
    {
         vector<int>v;
        v=nums;
        stack<long long>st;
        vector<long long>ans;
        int n=nums.size();
        //st.push(-1);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && v[st.top()]<=nums[i] ) st.pop();

            if(st.empty()) ans.push_back(-1);

            else ans.push_back(st.top());

            st.push(i);
        }
        return ans;
    }

    vector<long long>right_max(vector<int>nums)
    {
         vector<int>v;
        v=nums;
        stack<long long>st;
        vector<long long>ans;
        int n=nums.size();
        //st.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && v[st.top()]<nums[i] ) st.pop();

            if(st.empty()) ans.push_back(n);

            else ans.push_back(st.top());

            st.push(i);
        }
      reverse(ans.begin(),ans.end());
      return ans;
    }




    long long subArrayRanges(vector<int>& nums) {
        vector<long long>lmi,rmin,lmax,rmax;
        lmi= left_mini(nums);
        rmin = right_mini(nums);

        long long min_sum =0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            min_sum+=((i-lmi[i])*(rmin[i]-i))*nums[i];
        }



        lmax = left_max(nums);
        rmax = right_max(nums);

        long long max_sum =0;
        for(int i=0;i<n;i++)
        {
            max_sum+=((i-lmax[i])*(rmax[i]-i))*nums[i];
        }

        return max_sum-min_sum;
    }