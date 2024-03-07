#include<bits/stdc++.h>
using namespace std;
string maximumOddBinaryNumber(string s) {
        int c=0;
        for(auto it:s)
        {
            if(it=='1') c++;
        }
        int n=s.size();
        string st="";
        int i;
        for(i=0;i<n-1;i++)
        {
           if(i<c-1) st+='1';

           else st+='0';
        }
       
        st+='1';
        return st;


    }
int main()
{

}