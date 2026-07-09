#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<pair<int,int>> a;
vector<vector<int>> vis;

vector<int> dx = {0, 1, 1, 1, 0, -1, -1, -1};
vector<int> dy = {1, 1, 0, -1, -1, -1, 0, 1};

int bfs(int m, int n)
{
    int mx =1;
    queue<pair<int,int>> q;
    for(auto i:a) {q.push(i); vis[i.first][i.second]=1;}

    while(!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();

        for(int i =0; i<8; i++)
        {
            int nx = x+dx[i], ny = y+dy[i];
            if(nx>=1 and nx<=m and ny>=1 and ny<=n and vis[nx][ny] == 0) 
            {
                vis[nx][ny] = vis[x][y]+1;
                q.push({nx,ny});
                mx = max(mx, vis[nx][ny]);
            }
        }
    }

    return mx;
}

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int m, n, s; cin>>m>>n>>s;
    vis.assign(m+1, vector<int> (n+1, 0));

    for(int i=0; i<s; i++)
    {
        int x,y; cin>>x>>y;
        a.push_back({x,y});
    }

    cout << bfs(m, n) << '\n';

    return (0);
}