#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n,m; cin>>n>>m;
    vector<int> x(n+1, 0);

    for(int i=1; i<=m; i++)
    {
        int A,B,C; cin>>A>>B>>C;
        if(C>x[A]) x[A] = C;
        if(C>x[B]) x[B] = C;
    }

    for(int i=1; i<=n; i++)
    {
        if(x[i] == 0)
        {
            cout << 1000000 << ' ';
            continue;
        }
        cout << x[i] << ' ';
    }
    cout << '\n';

    return (0);
}