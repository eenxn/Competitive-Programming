#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin >> n;

    int i=0;
    vector<int> a(n), pf(n);
    while (n--)
    {
        int t; cin >> t;

        a[i++] = t;
    }

    pf[0] = a[0];
    for (int i=1; i<a.size(); i++)
    {
        pf[i] = a[i] + pf[i-1];
    }

    int m; cin >> m;
    while (m--)
    {
        int q; cin >> q;

        auto it = lower_bound(pf.begin(), pf.end(), q);
        int idx = it-pf.begin();

        cout << idx+1 << '\n';
    }

    return (0);
}