#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int col, row; cin>>col>>row;
    vector<vector<int>> grid(row, vector<int> (col));
    vector<vector<bool>> vis(row, vector<bool> (col, false));
    vector<vector<bool>> min(row, vector<bool> (col, false));

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>grid[r][c];
        }
    }

    queue<pair<int,int>> q;
    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            q.push({i,j});
            vis[i][j] = true;

            while(!q.empty())
            {
                pair<int, int> u = q.front(); q.pop(); 

                bool ismin = true;
                for(int t=0; i<4; i++)
                {
                    int nr = i+dr[t];
                    int nc = j+dc[t];

                    if(nr>=0 and nr<row and nc>=0 and nc<col)
                    {
                        if (grid[nr][nc] < grid[i][j] and !vis[nr][nc])
                        {
                            q.push({nr,nc});
                            vis[nr][nc] = true;
                            ismin = false;
                        }
                    }
                }

                if(ismin) min[i][j] = true;

            }
        }
    }

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<min[r][c] << " ";
        }
        cout << "\n";
    }




    return (0);
}