#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n, Q;
    cin >> n >> Q;

    vector<pair<int, int>> pref(n+1);
    pref[0] = {0, 0};

    for(int i=1; i<=n ; i++)
    {
        int p;
        cin >> p;
        pref[i].first = p + pref[i-1].first;
        pref[i].second = i;
    }
    sort(pref.begin(), pref.end());

    for(int i=1; i<=n; i++)
    {
        if(pref[i].second < pref[i-1].second)
        {
            pref[i].second = pref[i-1].second;
        }
    }


    int q;
    while (Q--)
    {
        cin >> q;
        auto it = upper_bound(pref.begin(), pref.end(), make_pair(q, INT_MAX));
        int idx = it-pref.begin()-1;
        // cout << it->first << it->second << '\n';
        cout << pref[idx].second << '\n';
    }

    return (0);
}