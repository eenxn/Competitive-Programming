#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MIN = -1e9-5;

signed main()
{
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    int n, q; cin>>n>>q;
    vector<int> r(n+1); cin>>r[1];
    vector<int> pfmax (n+1); pfmax[1] = r[1];
    int cursum = r[1];
    for (int i=2; i<=n; i++) 
    {
        cin>>r[i];
        cursum+=r[i];
        pfmax[i] = max(cursum, pfmax[i-1]);
    }
    

    while (q--)
    {
        int c; cin>>c;

        auto it = lower_bound(pfmax.begin()+1, pfmax.end(), c);
        int idx = it-pfmax.begin();

        if(it == pfmax.end())
        {
            cout << -1 << ' ';
            continue;
        }

        cout << idx << ' ';
    }
    cout << '\n';

    return (0);
}