#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " = " << x << '\n'
const int INF = 2e18;

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n,m; cin>>n>>m;
    vector<int> a(n+1), b(m+1);
    for(int i=1; i<=n; i++) {cin>>a[i];}
    for(int i=1; i<=m; i++) {cin>>b[i];}

    int mx=-INF, mn;
    for(int i=1; i<=n; i++)
    {
        auto it = lower_bound(b.begin()+1, b.end(), a[i]);
        int idx = it - b.begin();

        if(it==b.end()) mn = abs(a[i]-b[m]);
        else 
        {
            if(idx>1) mn = min( abs(a[i]-b[idx]), abs(a[i]-b[idx-1]) );
            else mn = abs(a[i]-b[idx]);
        }

        //debug(mn);

        mx = max(mx, mn);
    }

    cout << mx << '\n';

    return (0);
}