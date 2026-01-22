#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> p(n);

    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }

    sort(p.begin(), p.end());
    int med = p[((n+1)/2)-1];

    int cost = 0;
    for(int i=0; i<n; i++)
    {
        cost += abs(med-p[i]);
    }

    cout << cost << '\n';

    return (0);
}