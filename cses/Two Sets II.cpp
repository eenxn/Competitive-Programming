#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    int mxsum = n*(n+1)/2;
    
    if (mxsum%2 == 1)
    {
        cout << 0 << '\n';
        return (0);
    }

    vector<vector<int>> dp(n+1, vector<int> ((mxsum/2)+1, 0));
    dp[0][0] = 1;

    for(int i=1; i<n; i++)
    {
        for(int sum = 0; sum<=mxsum/2; sum++)
        {
            if(sum-i>=0) dp[i][sum] = (dp[i-1][sum] + dp[i-1][sum-i])%(int)(1e9+7);
            else dp[i][sum] = dp[i-1][sum];
        }
    }

    cout << dp[n-1][mxsum/2] << '\n';

    return (0);
}