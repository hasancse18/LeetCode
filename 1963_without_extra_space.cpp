#include<bits/stdc++.h>
using namespace std;
int minSwaps(string s) {
        int ans=0,m=0 ;
        for(auto it:s)
        {
            if(it==']')
            {
                ans++;
            }
            else
            {
                m=max(ans,m);
                ans--;
            }
        }
        m+=1;
        return m/2;

    }
int main()
{
    string s;
    cin>>s;
    cout<<minSwaps(s);

}