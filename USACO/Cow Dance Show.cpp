#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << ' = ' <<  x << '\n';

int n,t;
vector<int> d;

bool isTun(int k)
{
    if(k>n) return false;
    priority_queue<int, vector<int>, greater<int>> pq;
    int tt=0;
    for(int i=1; i<=k; i++)
    {
        pq.push(d[i]);
    }
    for(int i=k+1; i<=n; i++)
    {
        tt+= pq.top();
        pq.push(d[i]+pq.top());
        pq.pop();
    }

    return (tt<=t);
}

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    cin>>n>>t;
    d.assign(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        cin>>d[i];
    }

    int l=0, h=1e18, ans=h;
    while(l<=h)
    {
        int k = (l+h)/2;

        if(isTun(k))
        {
            h=k-1;
            ans = k;
        }
        else
        {
            l = k+1;
        }


    }

    cout << ans << '\n';

    return (0);
}