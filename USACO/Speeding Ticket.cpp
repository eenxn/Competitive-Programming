#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr << #x << " = " << x << '\n'

int main()
{
    //freopen("speeding.in", "r", stdin);
    //freopen("speeding.out", "w",  stdout);
    cin.tie(0); ios::sync_with_stdio(0);

    int m, n; cin>>n>>m;
    vector<int> spd(101);
    
    int x=1;
    for(int i=0; i<n; i++)
    {
        int seg,lim; cin>>seg>>lim;
        for(int j=x; j<seg+x; j++)
        {
            spd[j] = lim;
        }
        x+=(seg);
    }

    int mx=-1;
    x=1;
    for(int i=0; i<m; i++)
    {
        int seg, speed; cin>>seg>>speed;
        for(int j=x; j<seg+x; j++)
        {
            if(speed > spd[j])
            {
                mx = max(mx, speed-spd[j]);
            }
        }
        x+=(seg);
    }

    mx = max(mx,0);

    cout <<mx << '\n';

    return (0);
}