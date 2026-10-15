#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    cin.tie(0); ios::sync_with_stdio(0);

    int m,n,k; cin>>m>>n>>k;

    for(int i=0; i<m; i++)
    {
        string s; cin>>s;
        for(int y=0; y<k; y++)
        {
            for(int j=0; j<n; j++)
            {
                for(int x=0; x<k; x++)
                {
                    cout<< s[j];
                }
            }
            cout << '\n';
        }
    }

    return (0);
}