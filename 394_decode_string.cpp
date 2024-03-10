#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) {
        stack<string>st;
        string str="";
        string digit="";
        for(auto it:s)
        {
            if(isdigit(it))
            {
                digit+=it;
            }
           else if(isalpha(it))
            {
                str+=it;
            }
            else if(it=='[')
            {
                
                st.push(str);
                st.push(digit);
                str="";
                digit="";
            }
            else if(']')
            {
                int n=stoi(st.top());
                st.pop();
                string curr=st.top();
                st.pop();
                string a="";
                for(int i=0;i<n;i++)
                {
                    a+=str;
                }
                str=curr+a;
                
            }
        }
        return str;
    }
int main()
{

}