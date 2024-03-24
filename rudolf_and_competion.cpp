#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  while (t--) {
        long long n, m, h;
        cin>>n>>m>>h;
        long long p1,p2;
        long long ans = 1;
        for (int i = 0;i < n;i++)
        {
            vector<int>v;
            for (int i = 0;i < m;i++)
            {
                int a;cin >> a;
                v.push_back(a);
            }
            sort(v.begin(), v.end());
            long long sum = 0, count = 0;
            long long s = 0;
            for (int i = 0;i < m;i++)
            {
                sum += v[i];
                s += sum;
                count++;
                if (sum == h)
                    break;
                else if (sum > h)
                {
                    count--,  s-=sum;
                    break;
                }
            }
            if (i == 0)
            {
                p1=count;
                p2=s;
                continue;
            }
            if (count > p1)
            {
                ans++;
            }
            else if (count == p1)
            {
                if (s < p2)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}