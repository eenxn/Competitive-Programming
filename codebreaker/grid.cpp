#include <bits/stdc++.h>
using namespace std;
#define str string
int MOD = 1e9 +7;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int h, w; cin >>h >> w;
    vector<str> grid(h);
    
    for (int i=0; i<h; i++)
    {
        cin >>grid[i];
    }

    vector<vector<int>> dp(h, vector<int>(w, 0));
    dp[0][0] = 1;

    for (int row=0; row<h; row++)
    {
        for(int col=0; col<w; col++)
        {
            if (row ==0 and col==0) continue;

            if (grid[row][col] == '#') continue;

            if (row==0) dp[row][col] = dp[row][col-1];
            else if (col==0) dp[row][col] = dp[row-1][col];
            else dp[row][col] = (dp[row-1][col] + dp[row][col-1])%MOD;
        }
    }

    cout << dp[h-1][w-1] << '\n';


    return (0);
}