#include<bits/stdc++.h>
using namespace std;
 int minOperations(int k) {
       int x= k/2;
       int m= INT_MAX;
        for(int i=1;i<=x+1;i++)
        {
            if(k%i==0)
            {
                int x= (k/i)+i-2;
                m=min(m,x);
            }
            else
            {
                int x= (k/i)+i-2;
                x++;
                m= min(m,x);
            }
        }
        return m;
 }
int main()
{

}