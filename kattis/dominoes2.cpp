#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;

    while(q--)
    {
        int n,m,l; cin>>n>>m>>l;

        vector<vector<int>> ls(n+1);
        for(int i=1; i<=m; i++)
        {
            int x, y; cin>>x>>y;
            ls[x].push_back(y);
        }

        vector<int> list(l);
        for(int i=0; i<l; i++)
        {
            cin>>list[i];
        }

        queue<int> que;
        vector<bool> vis(n+1, false);

        int counter = 0;
        for(int i=0; i<l; i++)
        {
            if(!vis[list[i]])
            {
                que.push(list[i]);
                vis[list[i]] = true;
                counter++;
            }
            
            while(!que.empty())
            {
                int u = que.front(); que.pop();

                for(int v:ls[u])
                {
                    if(!vis[v])
                    {
                        vis[v] = true;
                        counter++;
                        que.push(v);
                    }
                }
            }
        }

        cout << counter << '\n';

    }

    return (0);
}