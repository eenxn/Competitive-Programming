#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    map<char,int> s;
    for(int i=0; i<5; i++)
    {
        string x; cin>>x;
        s[x[0]]++;
    }

    int mx=-1;
    for(auto [k,v]:s) mx = max(mx, v);

    cout << mx << '\n';

    return (0);
}