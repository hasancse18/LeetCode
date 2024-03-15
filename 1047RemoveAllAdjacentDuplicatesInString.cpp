string removeDuplicates(string s) {
        stack<char>st;
        for(auto it:s)
        {
            if (st.empty())
            {
                st.push(it);
                continue;
            }
            else if(st.top()==it)
            {
                while(!st.empty() && st.top()==it)
                {
                    st.pop();
                }
            }
            else
            {
                st.push(it);
            }
            

        }
        string str="";
            while(!st.empty())
            {
                str=st.top()+str;
                st.pop();
            }
        return str;
    }