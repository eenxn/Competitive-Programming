#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> con;
vector<bool> vis;

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    vis[n] = true;
    
    while(!q.empty())
    {
        int u=q.front(); q.pop();

        for(int v:con[u])
        {
            if (!vis[v]) 
            {
                vis[v] = true; 
                q.push(v);
            }
        }
    }
}

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, m; cin>>n>>m;
    con.resize(n+1);
    vis.assign(n+1, false);

    for(int i=1; i<=m; i++)
    {
        int u,v; cin>>u>>v;
        con[u].push_back(v);
        con[v].push_back(u);
    }

    bfs(1);

    bool all=true;
    for(int i=2; i<=n; i++)
    {
        if(!vis[i]) 
        {
            cout << i << '\n';
            all = false;
        }
    }
    
    if(all) cout << "Connected" << '\n';

    return (0);
}