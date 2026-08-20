#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<double> p(n+1, 0);
    for(int i=1; i<=n; i++) cin>>p[i];

    vector<vector<double>> dp(n+1, vector<double> (n+1, 0));
    dp[0][0] = 1;

    for(int i=1; i<=n; i++)
    {
        for(int c=0; c<=n; c++)
        {
            if(c-1<0) {dp[i][c] = dp[i-1][c]*(1-p[i]); continue;}
            dp[i][c] = (dp[i-1][c-1]*p[i]) + (dp[i-1][c]*(1-p[i]));
        }
    }

    double ans=0;
    for(int i=(n/2)+1; i<=n; i++)
    {
        ans+= dp[n][i];
    }

    cout << fixed << setprecision(10) << ans << '\n';

    return (0);
}