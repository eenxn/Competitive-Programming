#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, k; cin>>n>>k;
    vector<int> a(n), h(n), x(k);

    for(int i=0; i<n; i++) cin>>a[i]>>h[i];
    for(int i=0; i<k; i++) cin>>x[i];

    int mn= 1e18;
    for(int mask=0; mask<(1<<k); mask++)
    {
        int cur_min=0;
        int cnt=0;

        for(int j=0; j<k; j++)
        {
            if((mask>>j)&1) 
            {
                cnt++;
            }
        }

        for(int i=0; i<n; i++)
        {
            int min_dis=1e18;
            for(int j=0; j<k; j++) 
            {
                if((mask>>j)&1) 
                {
                    min_dis = min(min_dis,abs(a[i]-x[j]));
                }
            }

            cur_min+= min(min_dis, h[i]);
        }
        cur_min+=cnt;
        mn=min(mn, cur_min);
    }

    cout << mn << '\n';

    return (0);
}