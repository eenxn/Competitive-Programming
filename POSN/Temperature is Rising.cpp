#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << '=' << x << '\n'

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int m; cin>>m;
    int x, y; cin>> y>>x;
    x--;y--;

    vector<vector<int>> grid(m, vector<int> (m, -1));
    vector<vector<int>> vis(m, vector<int> (m, -1));

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
        }
    }

    queue<int> qx; qx.push(x);
    queue<int> qy; qy.push(y);
    vis[x][y] = grid[x][y];

    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, 1, 0, -1};

    int maximum= -1;

    if(m>1)
    {
        while(!qx.empty() and !qy.empty())
        {
            int curx = qx.front(); qx.pop();
            int cury = qy.front(); qy.pop();
    
            for(int i=0; i<4; i++)
            {
                int nx = curx+dx[i];
                int ny = cury+dy[i];
    
                if(nx>=0 and nx<m and ny>=0 and ny<m)
                {
                    if(grid[nx][ny] != 100 and vis[nx][ny] == -1 and (vis[curx][cury] < grid[nx][ny]))
                    {
                        qx.push(nx); qy.push(ny);
                        vis[nx][ny] = max(vis[curx][cury], grid[nx][ny]);
                        maximum = max(maximum, vis[nx][ny]);

                        // debug(nx);
                        // debug(ny);
                        // debug(maximum);
                    }
                }
            }
        }
    }

    else
    {
        maximum = grid[0][0];
    }

    cout << maximum << '\n';

    return (0);
}