#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    str s; cin >> s;
    vector<int> n(150, -1);

    for(int i=0; i<(int)s.size(); i++)
    {
        n[(int)s[i]]++;
    }

    for(int i=0; i<150; i++)
    {
        if(n[i] != -1)
        {
            cout << (char)i << ' ';
        }
    }
    cout << '\n';

    return (0);
}