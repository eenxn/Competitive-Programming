#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " = " <<  x << '\n'

int n,t;
vector<int> d;

bool isTun(int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int tt=0;
    for(int i=1; i<=k; i++)
    {
        pq.push(d[i]);
    }
    for(int i=k+1; i<=n; i++)
    {
        int x = pq.top();
        pq.pop();
        pq.push(x+d[i]);
    }

    while(pq.size()>1) pq.pop();

    return (pq.top()<=t);
}

signed main()
{
    // freopen("cowdance.in", "r", stdin);
    // freopen("cowdance.out", "w", stdout);
    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>t;
    d.assign(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        cin>>d[i];
    }

    int l=1, h=n, ans=h;
    while(l<=h)
    {
        int k = (l+h)/2;

        if(isTun(k))
        {
            h=k-1;
            ans = k;
            //debug(h);
        }
        else
        {
            l = k+1;
            //debug(l);
        }
    }

    cout << ans << '\n';

    return (0);
}