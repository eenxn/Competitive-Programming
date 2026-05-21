#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, x; cin>>n>>x;
    vector<int> c(n);
    for(int i=0;i<n; i++) cin>>c[i];

    vector<int> dp(x+1,INF);
    dp[0] = 0;

    for(int i=1; i<=x; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i-c[j]>=0)
            {
                dp[i] = min(dp[i-c[j]]+1, dp[i]);
            }
        }
    }

    cout << (dp[x]==INF? -1:dp[x]) << '\n';

    return (0);
}