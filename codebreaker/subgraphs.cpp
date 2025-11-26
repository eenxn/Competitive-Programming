#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> adj;
vector<bool> vis;


void bfs(int n)
{
    vis[n] = true;
    queue<int> q;
    q.push(n);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto x:adj[u])
        {
            if(!vis[x])
            {
                vis[x] = true;
                q.push(x);
            }
        }
    }

}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, e; cin>>n>>e;
    adj.resize(n);
    vis.assign(n, false);

    for(int i=0; i<e; i++)
    {
        int start, end; cin>>start>>end;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }
    
    int counter =0;
    for (int i=0; i<n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
            counter++;
        }
    }

    cout << counter << '\n';


    return (0);
}