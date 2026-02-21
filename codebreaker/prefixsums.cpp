#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, q; cin>>n>>q;
    vector<int> pref(n+1, 0);

    for(int i=1; i<=n; i++)
    {
        cin >> pref[i];
        pref[i] += pref[i-1];
    }

    for(int i=1; i<=q; i++)
    {
        int n1, n2; cin>>n1>>n2;
        cout << pref[n2]-pref[n1-1] << '\n';
    }

    return (0);
}