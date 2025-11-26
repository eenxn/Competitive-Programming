#include <bits/stdc++.h>
using namespace std;
#define str string
vector<int> dx = {-1, 0, 0, 1};
vector<int> dy = {0, -1, 1, 0};

int r,c;
vector<str> grid;
vector<vector<bool>> vis;

void ff(int x, int y)
{
    queue<pair<int, int>> q;
    vis[x][y] = true;
    q.push({x,y});

    while(!q.empty())
    {
        auto [cx, cy] = q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            int nx = cx+dx[i];
            int ny = cy+dy[i];

            if(nx<0 or ny<0 or nx>=r or ny>=c) continue;
            if(vis[nx][ny]) continue;
            if(grid[nx][ny] == '.') continue;
            q.push({nx,ny});
            vis[nx][ny] = true;
        }
    }
}

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    cin>>r>>c;

    grid.resize(r);
    vis.assign(r, vector<bool>(c, false));

    for(int i=0; i<r; i++)
    {
        cin>> grid[i];
    }

    int counter = 0;
    for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(!vis[i][j] and grid[i][j] != '.')
            {
                ff(i, j);
                counter++;
            }
        }
    }

    cout << "Oh, bother. There are " << counter << " pools of hunny." << '\n';

    return (0);
}