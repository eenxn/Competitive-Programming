#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi  vector<int>
#define vvi  vector<vi>

signed main()
{
    // freopen("closing.in", "r", stdin);
    // freopen("closing.out", "w", stdout);
    cin.tie(0); ios::sync_with_stdio(0);

    int n,m; cin>>n>>m;

    vvi adj(n+1);
    for(int i=1; i<=m; i++)
    {
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vi p(n+1); for(int i=1; i<=n; i++) cin>>p[i];
    
    vi isdead(n+1,0);
    for(int j=1; j<=n; j++)
    {
        int cpn=0;
        vi vis(n+1, 0);
        queue<int> q;
        for(int i=1; i<=n; i++)
        {
            if(!vis[i] and !isdead[i])
            {
                q.push(i); vis[i]++;
                while(!q.empty())
                {
                    int idx = q.front();
                    q.pop();

                    for(auto x:adj[idx])
                    {
                        if(!vis[x] and !isdead[x]) {q.push(x); vis[x]++;}
                    }
                }
                cpn++;
            }
        }
        if(cpn==1) cout << "YES" << '\n';
        else cout << "NO" << '\n';

        isdead[p[j]]++;
    }

    return (0);
}