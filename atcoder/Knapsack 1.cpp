#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n,w; cin>>n>>w;
    vector<int> weight(n+1), value(n+1);
    vector<vector<int>> dp(n+1, vector<int> (w+1, 0));
    for(int i=1; i<=n; i++) cin>> weight[i] >> value[i];

    for(int obj=1; obj<=n; obj++)
    {
        for(int wt=0; wt<=w; wt++)
        {
            if(wt>=weight[obj])
            {
                dp[obj][wt] = max(value[obj]+dp[obj-1][wt-weight[obj]], dp[obj-1][wt]);
            }
            else
            {
                dp[obj][wt] = dp[obj-1][wt];
            }
        }
    }

    cout << dp[n][w] << '\n';

    return (0);
}