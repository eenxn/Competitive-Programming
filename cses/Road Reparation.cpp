#include <bits/stdc++.h>
#define int long long
using namespace std;

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

void unite(int u, int v)
{
    int a = root(u);
    int b = root(v);

    if(a==b) return;
    if(sz[b]>sz[a]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, m; cin>>n>>m;
    vector<tuple<int, int, int>> e;

    for(int i=0; i<m; i++)
    {
        int w, u, v; cin>>u>>v>>w;
        e.push_back({w, u, v});
    }

    sort(e.begin(), e.end());

    build(n);

    int cost=0;
    int edge_count = 0;
    for(auto& [w, u, v]: e)
    {
        if(root(u)==root(v)) continue;
        unite(u, v);
        cost+=w;

        if(++edge_count == n-1) break;
    }

    if(edge_count<n-1) 
    {
        cout << "IMPOSSIBLE" << '\n';
        return (0);
    }

    cout << cost << '\n';

    return (0);
}