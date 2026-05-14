#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> a(n+1, 0);
    for(int i=1; i<=n; i++) cin>>a[i];

    vector<int> dp(n+1);

    dp[1] = max(a[1],0LL);
    for(int i=2; i<=n; i++)
    {
        dp[i] = max(dp[i-1], dp[i-2]+a[i]);
    }

    cout << dp[n] << '\n';

    return (0);
}