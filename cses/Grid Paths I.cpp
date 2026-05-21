#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
const int MOD = 1e9+7;

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<str> grid(n+1);

    for(int i=1; i<=n; i++)
    {
        str temp;
        cin>>temp;
        grid[i] = " "+temp;
    }

    if(grid[1][1]=='*')
    {
        cout << 0 << '\n';
        return (0);
    }

    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));\
    dp[1][1]=1;

    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=n; c++)
        {
            if(r==1 and c==1) continue;
            if(grid[r][c] != '*') 
            {
                dp[r][c] = (dp[r-1][c] + dp[r][c-1])%MOD;
            }
        }
    }

    cout << dp[n][n] << '\n';

    return (0);
}