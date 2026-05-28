#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 4e18;

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> height(n+2, 0);
    for(int i=1; i<=n; i++)
    {
        cin>>height[i];
    }
    height[0] = 1e9;

    vector<int> dp(n+2, INF);
    dp[0] = 0;
    
    for(int i=1; i<=n+1; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(height[i]<=height[j])
            {
                dp[i] = min(dp[i], ((i-j)*(i-j))+dp[j]);
            }
        }
    }

    cout << dp[n+1] << '\n';

    return (0);
}