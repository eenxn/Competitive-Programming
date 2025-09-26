#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> dp(45);
    dp[0] = 0;
    dp[1] = 1;

    for (int i=2; i<=40; i++)
    {
        dp[i] = dp[i-2] + dp[i-1];
    }

    cout << dp[n-1] << '\n';

    return (0);
}