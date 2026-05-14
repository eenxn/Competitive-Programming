#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> parent;
vector<int> sz;

void build(int n)
{
    parent.resize(n+1);
    sz.assign(n+1, 1);

    for(int i=1; i<=n; i++) parent[i] = i;    
}

int root(int a)
{
    if(parent[a] == a) return a;
    return parent[a] = root(parent[a]);
}

void unite(int a, int b)
{
    int u = root(a);
    int v = root(b);

    if(u==v) return;
    if(sz[v]==sz[u])
    {
        if(v<u) swap(u,v);
    }
    else if(sz[v]>sz[u]) swap(u,v);
    parent[v] = u;
    sz[u] += (sz[v]/2);
}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, m; cin>>n>>m;
    build(n);

    for(int i=1; i<=n; i++)
    {
        cin>>sz[i];
    }

    while(m--)
    {
        int a, b; cin>>a>>b;
        
        if(root(a)==root(b)) 
        {
            cout << -1 << '\n';
            continue;
        }

        if(sz[root(a)]>sz[root(b)])
        {
            unite(a, b);
            cout << root(a) << '\n';
            continue;
        }
        if(sz[root(a)]<sz[root(b)])
        {
            unite(a, b);
            cout << root(b) << '\n';
            continue;
        }
        if(sz[root(a)]==sz[root(b)])
        {
            if(root(a)<root(b)) 
            {
                unite(a, b);
                cout << root(b) << '\n';
                continue;
            }
            if(root(a)>root(b)) 
            {
                unite(a, b);
                cout << root(a) << '\n';
                continue;
            }
        }
        
    }

    return (0);
}