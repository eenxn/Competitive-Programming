#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    map<string,int> mp;

    for(int i=0; i<n; i++)
    {
        string s, nm; cin>>s;
        cin.ignore();
        getline(cin,nm);

        mp[s]++;
    }

    for(auto [k,v]: mp) cout << k << ' ' << v << '\n';

    return (0);
}