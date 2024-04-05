    string makeGood(string s) {
        stack<char>st;
        for(auto it:s)
        {
            if(st.empty())
            {
                st.push(it);
                continue;
            }
            bool check= isupper(it);
            char c=it;;
            if(check)   c=tolower(it);

            if((check && islower(st.top()) &&(st.top()==c))|| (!check && isupper(st.top()) &&(tolower(st.top())==c)))
            {
                st.pop();
            }
            else
            {
                st.push(it);
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }