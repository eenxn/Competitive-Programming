#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n,x; cin>>n>>x;
    vector<int> h(n+1), s(n+1);
    vector<vector<int>> dp(n+1, vector<int> (x+1, 0));
    for(int i=1; i<=n; i++) cin>>h[i];
    for(int i=1; i<=n; i++) cin>>s[i];

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=x; j++)
        {
            if(j-h[i]<0) {dp[i][j] = dp[i-1][j]; continue;}
            dp[i][j] = max(dp[i-1][j], s[i]+dp[i-1][j-h[i]]);
        }
    }

    cout << dp[n][x] << '\n';

    return (0);
}