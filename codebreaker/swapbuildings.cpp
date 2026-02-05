#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr<<#x<<" = "<<x << '\n';

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> h(n);
    vector<int> v(n+1, 0);

    for(int i=0; i<n; i++)
    {
        cin >> h[i];
        v[h[i]]++;
    }

    int tc = n*(n-1)/2;
    //debug(tc);

    for(int i=0; i<=n; i++)
    {
        if(v[i]>1)
        {
            tc -= (((v[i]-1)*(v[i]))/2);
            //debug(tc);
        }
    }

    cout << tc << '\n';

    return (0);
}