#include <bits/stdc++.h>
using namespace std;
#define str string

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int m,n; cin>>m>>n;
    
    vector<str> grid(m);
    vector<vector<bool>> vis(m, vector<bool>(n, false));

    for(int i=0; i<m; i++)
    {
        cin>>grid[i];
    }

    vector<int> dr = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dc = {-1, 0, 1, -1, 1, -1, 0, 1};

    int counter =0;
    for(int row=0; row<m; row++)
    {
        for(int col=0; col<n; col++)
        {
            if(grid[row][col] == '.' or vis[row][col]) continue;
            queue<pair<int, int>> q;
            q.push({row,col});
            vis[row][col] = true;

            while(!q.empty())
            {
                auto [cr,cc] =q.front(); q.pop();

                for(int i=0; i<8; i++)
                {
                    int ndr = dr[i]+cr;
                    int ndc = dc[i]+cc;

                    if(ndr < 0 or ndr >=m or ndc < 0 or ndc >=n) continue;
                    if(vis[ndr][ndc] or grid[ndr][ndc]=='.') continue;
                    vis[ndr][ndc]=true;
                    q.push({ndr,ndc});
                }
            }

            counter++;

        }
    }

    cout << counter << '\n';

    return (0);
}