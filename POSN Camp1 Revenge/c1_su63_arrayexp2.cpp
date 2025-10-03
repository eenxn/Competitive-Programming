#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int r, c; cin >> r>> c;
    vector<vector<int>> n(r, vector<int>(c, 0));

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> n[i][j];
        }
    }

    int q; cin >> q;

    int pos = 0, neg = 0, even = 0, odd = 0;
    bool tpos = false, tneg = false, teven = false, todd = false;
    while(q--)
    {
        int t, m; cin >> t >> m;
        t--;
        m--;
        if ((t>=0 and t<r) and (m>=0 and m<c))
        {
            tpos = 0, tneg = 0, teven = 0, todd = 0;
            if(n[t][m] > 0) {pos++; tpos = true;}
            if(n[t][m] < 0) {neg++; tneg = true;}
            if(n[t][m]%2 == 0) {even++; teven = true;}
            if(n[t][m]%2 != 0) {odd++; todd = true;}
        }
        else
        {
            //cout << tpos << tneg << teven << todd << '\n';
            if(tpos) pos++;
            if(tneg) {neg++;}
            if(teven) even++;
            if(todd) odd++;
        }
    }

    cout << pos << ' ' << neg << ' ' << even << ' ' << odd << '\n';


    return (0);
}