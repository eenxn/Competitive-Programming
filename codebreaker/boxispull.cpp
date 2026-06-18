#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;
    while(q--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        if(x1==x2 and y1==y2)
        {
            cout << 0 << '\n';
            continue;
        }
        if(y1==y2 and x1!=x2) cout << abs(x2-x1) << '\n';
        else if(x1==x2 and y1!=y2) cout << abs(y2-y1) << '\n';
        else cout << abs(x2-x1)+abs(y2-y1)+2 << '\n';
    }

    return (0);
}