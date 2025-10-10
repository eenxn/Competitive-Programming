#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int s, n; cin>>s>>n;
    vector<pair<int, int>> ls;
    for(int i=0; i<n; i++)
    {
        int x, y; cin>> x>> y;
        ls.push_back({x, y});
    }
    sort(ls.begin(), ls.end());

    for(int i=0; i<n; i++)
    {
        if(s>ls[i].first)
        {
            s+=ls[i].second;
        }
        else
        {
            cout << "NO" <<'\n';
            return(0);
        }
    }
    cout << "YES" << '\n';

    return (0);
}