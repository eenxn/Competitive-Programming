#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, q; cin>>n>>q;

    vector<int> pfx(n+1, 0);
    int temp;
    for(int i=1; i<=n; i++) 
    {
        cin>>temp;
        pfx[i] = pfx[i-1]+temp;
    }

    while(q--)
    {
        int a, b; cin>>a>>b;
        cout << pfx[b]-pfx[a-1] << '\n';
    }

    return (0);
}