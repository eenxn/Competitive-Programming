#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;

    vector<pair<int,int>> l(n);
    vector<int> pfx(n, 0);
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;

        int counter = 1;
        while(a%2 == 0)
        {
            a/=2;
            counter*=2;
        }

        l[i] = {a, counter};
        if (i==0)
        {
            pfx[i] = counter;
            continue;
        }
        pfx[i] = pfx[i-1]+counter;
    }

    int q; cin>>q;

    while(q--)
    {
        int x; cin>>x;

        auto it = lower_bound(pfx.begin(), pfx.end(), x);
        int idx = it - pfx.begin();
        cout << l[idx].first << '\n';
    }


    return (0);
}