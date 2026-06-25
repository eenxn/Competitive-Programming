#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " = " << x << '\n'
vector<int> x;
vector<int> a;
vector<int> b;

bool isOk(int mid)
{
    int lw = 0, up = mid;

    for(int i=1; i<x.size(); i++)
    {
        int rhs = x[i]-(mid*b[i]);
        // debug(a[i]);
        // debug(b[i]);

        if(a[i]==b[i])
        {
            // debug(mid);
            // debug(rhs);
            if(rhs <0) return false;
            continue;
        }

        int fl = ceil((double)(x[i]-(mid*b[i]))/(a[i]-b[i]));
        int fu = (x[i]-(mid*b[i]))/(a[i]-b[i]); 
        if(a[i]>b[i]) 
        {
            if(fu<up) up = fu;
        }
        if(a[i]<b[i]) 
        {
            if(fl>lw) lw = fl;
        }
    }
    debug(true);
    return (lw<=up);
}

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    x.resize(n+1);
    a.resize(n+1);
    b.resize(n+1);

    for(int i=1; i<=n; i++) cin>>x[i];
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    int l=0, h=4e9, ans=l;
    while(l<=h)
    {
        int md = (l+h)/2;

        if(isOk(md))
        {
            ans = md;
            l = md+1;
        }
        else
        {
            // debug(md);
            h = md-1;
        }
    }

    cout << ans << '\n';
        
    return (0);
}