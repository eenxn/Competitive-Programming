#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;

    vector<int> dp(n);

    for(int i=0; i<n; i++)
    {
        cin >> dp[i];
    }

    int sum = 0, mn = 1000000000;

    for(int i =0; i<n; i++)
    {
        sum += dp[i];
        mn = min(mn, sum);

        if (sum > 0)
        {
            sum = 0;  
        }

    }

    cout << mn << '\n';

    return (0);
}