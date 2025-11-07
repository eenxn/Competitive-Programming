#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long
int MOD = 1000000007;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int h,w; cin>>h>>w;
    vector<str> grid(h);
    vector<vector<int>> dp(h+1,vector<int>(w+1, 0)); dp[1][1] = 1;

    for(int i=0; i<h; i++)
    {
        cin >> grid[i];
    }

    for (int i =1; i<=h; i++)
    {
        for (int j=1; j<=w; j++)
        {
            if (i==1 and j==1) continue;
            if (grid[i-1][j-1] == 'X') continue;
            dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
        }
    }

    cout << dp[h][w] << '\n';

    return (0);
}