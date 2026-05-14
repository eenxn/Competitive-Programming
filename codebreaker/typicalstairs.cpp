#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, m; cin>>n>>m;

    vector<int> dp(n+1);
    vector<int> bk(n+1, 1);
    for(int i=1; i<=m; i++)
    {
        int temp;
        cin>>temp;
        bk[temp] = 0;
    }

    dp[0] = 1;
    dp[1] = bk[1];
    dp[2] = (dp[0]+dp[1])*bk[2];

    for(int i=3; i<=n; i++)
    {
        dp[i] = ((dp[i-2]+dp[i-1])%(int)(1e9+7))*bk[i];
    }

    cout << dp[n] << '\n';

    return (0);
}