#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int r,c; cin>>r>>c;
    vector<vector<int>> pascal(r+1);
    pascal[1].resize(3);
    pascal[1][0] = 0;
    pascal[1][1] = 1;
    pascal[1][2] = 0;
    for(int i=2; i<=r; i++)
    {
        pascal[i].resize(i+2);
        pascal[i][0] = 0;
        pascal[i][i+1]= 0;
        for(int j=1; j<=i; j++)
        {
            pascal[i][j] = pascal[i-1][j-1]+pascal[i-1][j];
        }
    }

    cout << pascal[r][c] << '\n';

    return (0);
}