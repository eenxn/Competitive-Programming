#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    str s; cin>>s;
    map<char, int> mp = {
        {'A', 0},
        {'B', 0},
        {'C', 0},
        {'D', 0},
        {'E', 0},
        {'F', 0},
        {'G', 0},
        {'H', 0},
    };

    for(int i=0; i<(int)s.size(); i++)
    {
        mp[s[i]]++;
    }

    for(auto [k, v]:mp)
    {
        cout << v << ' ';
    }
    cout << '\n';

    return (0);
}