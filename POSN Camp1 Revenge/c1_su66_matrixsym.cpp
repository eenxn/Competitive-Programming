#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<vector<int>> mat(n, vector<int>(n, 0));

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            cin >> mat[i][j];
            mat[j][i] = mat[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }

    return (0);
}