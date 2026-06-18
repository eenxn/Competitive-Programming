#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " = " << x << '\n'
const int INF = 4e18;

vector<int> x, dtn;
vector<pair<int,int>> a;

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, k; cin>>n>>k;
    int ttl = 0;
    a.resize(n+1);
    x.resize(k+1);
    dtn.assign(k+1, 0);

    for(int i=1; i<=n; i++) cin>> a[i].first>>a[i].second;
    for(int i=1; i<=k; i++) cin>> x[i];

    sort(a.begin()+1, a.end());
    sort(x.begin()+1, x.end());

    for(int i=1; i<=n; i++)
    {
        auto it = lower_bound(x.begin()+1, x.end(), a[i].first);
        int idx = it-x.begin(); //debug(idx);

        int dist_to_right = INF, dist_to_left = INF, dist;

        if(x[idx] == a[i].first) dist = 0;
        else 
        {
            if(it != x.end()) dist_to_right = abs(x[idx]-a[i].first);
            if(idx>1) dist_to_left = abs(x[idx-1]-a[i].first);       
            dist = min(dist_to_left, dist_to_right); 
        }

        if(dist<a[i].second)
        {
            if (dist == 0)
            {
                dtn[idx]++;
                continue;
            }
            if (dist_to_left < dist_to_right) dtn[idx-1]++;
            else if (dist_to_left > dist_to_right) dtn[idx]++;

            else
            {
                if(dtn[idx-1] == dtn[idx] or dtn[idx-1]<dtn[idx]) dtn[idx]++;
                else if (dtn[idx-1]>dtn[idx]) dtn[idx-1]++;
            }

            ttl += dist;
        }
        else
        {
            ttl+=a[i].second;
        }

        // debug(dist_to_right);
        // debug(dist_to_left);
        // debug(dist);
    }

    for(int i=1; i<=k; i++)
    {
        //debug(ttl);
        if(dtn[i]>0) ttl++;
    }

    cout << ttl << '\n';

    return (0);
}