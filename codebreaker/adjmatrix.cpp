#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, e; cin>>n>>e;
    vector<vector<int>> adj(n+1, vector<int> (n+1));

    for (int i=1; i<=e; i++)
    {
        int start, end; cin>>start>>end;
        adj[start][end] = 1;
        adj[end][start] = 1;

    }

    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout << adj[i][j];
        }
        cout <<'\n';
    }

    return (0);
}