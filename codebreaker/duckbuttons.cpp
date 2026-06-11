#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, d; cin>>n>>d;
    vector<int> a(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        cin>> a[i];
    }

    int mx=0, sum=0;
    for(int i=n; i>1; i--)
    {
        if(mx<a[i]) mx=a[i];
        sum+=mx;
    }

    cout << sum << '\n';

    return (0);
}