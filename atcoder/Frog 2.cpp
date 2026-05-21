#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, k; cin>>n>>k;
    vector<int> h(n+1, 0);

    for(int i=1; i<=n; i++) cin>> h[i];

    vector<int> dp(n+1, 0);

    dp[2] = abs(h[1]-h[2]);
    for(int i=3; i<=n; i++)
    {
        int mn = 4e18;
        for(int j=1; j<=k; j++)
        {
            if((i-j)>=1) mn = min(mn, abs(h[i-j]-h[i])+dp[i-j]);
        }
        dp[i] = mn;
    }

    cout << dp[n] << '\n';


    return (0);
} 