#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    int counter=0;

    int t;
    while(n>0)
    {
        t=n;
        int digit= to_string(t).length();

        int mx = -4e18;
        for(int i=1; i<=digit; i++)
        {
            mx = max(t%10, mx);
            t/=10;
        }
        n-=mx;
        counter++;
    }

    cout << counter << '\n';

    return (0);
}