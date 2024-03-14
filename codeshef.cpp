#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int o=0,z=0;
        int c=0;
        o=count(str.begin(),str.end(),'1');
        for(auto it:str)
        {
            if(it=='1')
            {
                z=max(z,c);
                c=0;
            }
            else if(it=='0')
            {
                c++;
            }
        }
        cout<<o+z<<endl;
    }
}
