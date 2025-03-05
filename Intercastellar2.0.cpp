#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(0);

    long long n;
    vector<pair<long long , long long>> c;
    cin >> n;
    while (n--)
    {
        int x, y = 1;
        cin >> x;
        while(x%2 == 0)
        {
            x /= 2;
            y *= 2;
        }
        c.emplace_back(x, y);
    }

    vector<long long> pref(c.size()+1);
    pref[0] = 0;

    for(int i=1; i<=c.size(); i++)
    {
        pref[i] = pref[i-1] + c[i-1].second;
    }

    long long q;
    cin >> q;
    while(q--)
    {
        long long j;
        cin >> j;

        auto it = lower_bound(pref.begin(),pref.end(), j);
        int idx = it-pref.begin()-1;

        cout << c[idx].first << '\n';
    }

    return (0);
}