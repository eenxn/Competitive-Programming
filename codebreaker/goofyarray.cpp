#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, q; cin>>n>>q;
    vector<int> a(n+1, 0); for(int i=1; i<=n; i++) cin>>a[i];
    sort(a.begin()+1, a.end());
    vector<int> diff(n, 0), pfx(n,0); 
    for(int i=1; i<n; i++) 
    {
        diff[i] = abs(a[i+1]-a[i]);
    }

    sort(diff.begin()+1, diff.end());

    for(int i=1; i<n; i++) 
    {
        pfx[i] = diff[i]+pfx[i-1];
    }

    while(q--)
    {
        int d; cin>>d;

        auto it = upper_bound(diff.begin()+1, diff.end(), d);
        int idx = it-diff.begin();

        if(it == diff.end())
        {
            cout << pfx[n-1] << '\n';
            continue;
        }

        int ans = pfx[idx-1]+(d*(n-idx));
        cout << ans << '\n';
    }

    return (0);
}