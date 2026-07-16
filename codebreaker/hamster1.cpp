#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, k; cin>>n>>k;
    vector<int> h(n+1);
    for(int i=1; i<=n; i++) cin>>h[i];

    vector<int> dp(n+1, 1e18);
    dp[1] = 0;
    dp[2] = abs(h[2]-h[1]);

    for(int i=3; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            if(i-j>0) dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
        }
    }

    cout << dp[n] << '\n';

    return (0);
}