#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX_N = 2e5+5;
const int MOD = 998244353;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> dp(MAX_N);
    
    dp[0] = 0;
    dp[1] = 1;

    if(n==1)
    {
        cout << 0 << '\n';
        cout << dp[1] << '\n';
        return (0);
    }
    if(n==2)
    {
        cout << 0 << '\n';
        cout << dp[1] << '\n' << 1 << '\n';
        return (0);
    }

    cout << 0 << '\n' << 1 << '\n';
    for (int i=2; i<=n; i++)
    {
        dp[i] = (dp[i-2] + dp[i-1])%MOD;
        cout << dp[i] << '\n';
    }

    return (0);
}