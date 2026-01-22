#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, x; cin>>n>>x;

    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++)
    {
        cin>> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    int l=0, h=n-1;

    while(l<h)
    {
        int cursum = a[l].first+a[h].first;

        if(cursum<x)
        {
            l++;
        }

        if(cursum>x)
        {
            h--;
        }

        if(cursum == x)
        {
            cout << a[l].second+1 << " " << a[h].second+1 << '\n';
            return (0);
        }
    }
    cout << "IMPOSSIBLE\n";

    return (0);
}