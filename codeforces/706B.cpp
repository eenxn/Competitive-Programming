#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    
    int n; cin>>n;
    
    vector <int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());


    int q; cin>>q;
    
    while (q--)
    {
        int m; cin>>m;

        auto it = upper_bound(a.begin(), a.end(), m);
        int idx = it-a.begin();


        cout << idx << '\n';
    }

    return (0);
}