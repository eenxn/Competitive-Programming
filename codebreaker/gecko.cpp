#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int h, w; cin>>h>>w;

    vector<vector<int>> grid(h+1, vector<int>(w+1));
    vector<vector<int>> dp(h+1, vector<int>(w+1, 0));

    for (int i=1; i<=h; i++)
    {
        for (int j =1; j<=w; j++)
        {
            cin >> grid[i][j];
        }
    }

    dp[1] = grid[1];

    for (int i=2; i<=h; i++)
    {
        for (int j=1; j<=w; j++)
        {
            dp[i][j] = max({dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]})+grid[i][j];
        }
    }

    int mx = -1;
    for (int i=1; i<=w; i++)
    {
        mx = max(mx, dp[h][i]);
    }

    cout << mx << '\n';

    return (0);
}