#include <bits/stdc++.h>
using namespace std;
#define debug(x) cerr<<#x<<" = "<<x<<'\n'

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<vector<int>> grid(n, vector<int> (n, 1));
    vector<vector<int>> gdis(n, vector<int> (n, -1));
    pair<int,int> k; cin>>k.first>>k.second;
    pair<int,int> p; cin>>p.first>>p.second;
    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
        int tx, ty; cin>>tx>>ty;
        grid[tx-1][ty-1] = 0;
    }
    
    queue<pair<int, int>> q;
    q.push({k.first-1, k.second-1});
    gdis[k.first-1][k.second-1] = 0;

    vector<int> dx = {-2, -1, 1, 2, 2, 1, -1, -2};
    vector<int> dy = {1, 2, 2, 1, -1, -2, -2, -1};

    while(!q.empty())
    {
        auto [cr,cc] = q.front();
        q.pop();

        int desx, desy;
        for(int i=0; i<8; i++)
        {
            desx = cr+dx[i];
            desy = cc+dy[i];
            //debug(cr);
            //debug(cc);
            
            if(desx >=0 and desx <n and desy >=0 and desy<n and gdis[desx][desy]==-1 and grid[desx][desy] == 1)
            {
                q.push({desx, desy});
                gdis[desx][desy] = gdis[cr][cc]+1;
                //debug(gdis[desx][desy]);
            }
        }
    }

    cout << gdis[p.first-1][p.second-1] << '\n';

    return (0);
}