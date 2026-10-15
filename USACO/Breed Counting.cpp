#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " = " << x

signed main()
{
    //freopen("bcount.in", "r", stdin);
    //freopen("bcount.out", "w", stdout);
    cin.tie(0); ios::sync_with_stdio(0);

    int n,q; cin>>n>>q;
    vector<int> cow(n+1);
    for(int i=1; i<=n; i++) cin>>cow[i];

    vector<vector<int>> dp(n+1, vector<int> (4,0));
    for(int i=1; i<=n; i++) 
    {
        dp[i][1] = dp[i-1][1];
        dp[i][2] = dp[i-1][2];
        dp[i][3] = dp[i-1][3];

        dp[i][cow[i]]++;
    }
    
    while(q--)
    {
        int a,b; cin>>a>>b;

        cout << dp[b][1]-dp[a-1][1] << ' ' << dp[b][2]-dp[a-1][2] << ' ' << dp[b][3]-dp[a-1][3] << '\n';
    }

    return (0);
}