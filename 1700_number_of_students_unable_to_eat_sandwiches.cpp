int countStudents(vector<int>& students, vector<int>& sandwiches) {
        reverse(sandwiches.begin(),sandwiches.end());
        stack<int>st;
        queue<int>qt;
        for(auto it:students)
        {
            qt.push(it);
        }
        for(auto it:sandwiches)
        {
            st.push(it);
        }
        int c=sandwiches.size();
        int i=0;
        while(!st.empty() && !qt.empty())
        {
            if(qt.front()!=st.top())
            {
                qt.push(qt.front());
                qt.pop();
                i++;
                if(i>c) break;// logic mann
            }
            else
            {
                qt.pop();
                st.pop();
                c--;
                i=0;
            }
        }
        return qt.size();

    }