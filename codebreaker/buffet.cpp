#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << '=' << x << '\n'

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, k; cin>>n>>k;
    vector<int> t1(n), t2(n), dp1(n), dp2(n);

    for(int i=0; i<n; i++)
    {
        cin>>t1[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cin>>t2[i];
    }

    dp1[0] = t1[0];
    dp2[0] = t2[0];

    for(int i=1; i<n; i++)
    {
        dp1[i] = max(dp1[i-1] + t1[i], dp2[i-1]-k + t1[i]);
        dp2[i] = max(dp2[i-1] + t2[i], dp1[i-1]-k + t2[i]);
    }

    cout << max(dp1[n-1], dp2[n-1]) << '\n';

    return (0);
}