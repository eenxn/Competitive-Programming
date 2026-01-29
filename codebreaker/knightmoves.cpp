#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<vector<int>> grid(n, vector<int> (n, 1));
    pair<int,int> k; cin>>k.first>>k.second;
    pair<int,int> p; cin>>p.first>>p.second;
    int t; cin>>t;
    for(int i=0; i<t; i++)
    {
        int tx, ty; cin>>tx>>ty;
        grid[tx-1][ty-1] = 0;
    }
    
    queue<pair<int, int>> q;
    q.push({k.first, k.second});

    vector<int> dx = {-2, -1, 1, 2, 2, 1, -1, -2};
    vector<int> dy = {1, 2, 2, 1, -1, -2, -2, -1};

    int min;
    while(!q.empty())
    {
        auto [cr,cc] = q.front();
        q.pop();

        int desx, desy;
        for(int i=0; i<8; i++)
        {
            desx = cr+dx[i];
            desy = cc+dy[i];

            if(desx >=0 and desx <n and desy >=0 and desy<n)
            {
                q.push({desx, desy});
            }
        }
    }

    return (0);
}