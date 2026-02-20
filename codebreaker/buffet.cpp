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

    
    // no if else in dp


    return (0);
}