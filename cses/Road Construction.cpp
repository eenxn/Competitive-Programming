#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> parent, sz;
int maxcomp = -1;

void build(int n)
{
    parent.resize(n+1);
    sz.assign(n+1, 1);

    for(int i=1; i<=n; i++) parent[i] = i;
}
int root(int a)
{
    if (parent[a] == a) return a;
    return  parent[a] = root(parent[a]);
}

void unite(int a, int b)
{
    int u = root(a);
    int v = root(b);

    if(u==v) return;
    if(sz[u]<sz[v]) swap(u,v);

    parent[v] = u;
    sz[u] += sz[v];
    maxcomp = max(maxcomp, sz[u]);
}


bool same(int a, int b)
{
    return root(a) == root(b);
}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, m; cin>>n>>m;

    int comp = n;

    build(n);

    for(int i=0; i<m; i++)
    {
        int a, b; cin>>a>>b;
        if (!same(a, b)) {unite(a, b); comp--;}
        cout << comp << ' ' << maxcomp << '\n';
    }

    return (0);
}