#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> h(n+1, 0), dp(n+1, 0);

    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
    }

    for(int i=2; i<=n; i++)
    {
        dp[i] = min(dp[i-1]+abs(h[i-1]-h[i]), dp[i-2]+abs(h[i-2]-h[i]));
    }

    cout << dp[n] << '\n';
    return (0);
}