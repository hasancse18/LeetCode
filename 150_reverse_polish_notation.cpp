#include<bits/stdc++.h>
using namespace std;
int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it:tokens)
        {
            if(it=="+" || it=="-" || it=="*" || it=="/"){
                int op2 =st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                if(it=="+")
                {
                    st.push(op1+op2);
                }
                else if(it=="*")
                {
                    st.push(op1*op2);
                }
                else if(it=="-")
                {
                    st.push(op1-op2);
                }
                else 
                {
                    st.push(op1/op2);
                }
            }
            else{
                st.push(stoi(it));
            }
        }
        return st.top();
    }
int main()
{

}