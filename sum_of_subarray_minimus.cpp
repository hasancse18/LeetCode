class Solution {
public:
    vector<int>get_left(vector<int>v)
    {
        stack<int>st;
        vector<int>ans;
        int n= v.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && v[st.top()]>=v[i]) st.pop();
            if(!st.empty()) ans.push_back(st.top());
            else ans.push_back(-1);
            st.push(i);

        }
        return ans;
    }
    vector<int>get_right(vector<int>v)
    {
        stack<int>st;
        vector<int>ans;
        int n= v.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && v[st.top()]>v[i]) st.pop();
            if(!st.empty()) ans.push_back(st.top());
            else ans.push_back(n);
            st.push(i);

        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>left=get_left(arr);
        vector<int>right = get_right(arr);
        int n= arr.size();
        long long x=1e9+7;
        long long sum=0;
        reverse(right.begin(),right.end());
        for(int i=0;i<n;i++)
        {
            long long ls=i-left[i];
            long long rs= right[i]-i;
            long long t= ls*rs*arr[i];
            sum=(sum+t)%x;
        }
        return sum;
    }
};