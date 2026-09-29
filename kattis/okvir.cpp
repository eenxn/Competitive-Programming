#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int m,n; cin>>m>>n;
    int u,l,r,d; cin>>u>>l>>r>>d;

    string o = ".#", e="#.";

    for(int i=0; i<u; i++)
    {
        for(int j=0; j<(l+r+n); j++)
        {
            if(i%2==0)
            {
                if(j%2==0) cout << '#';
                else if(j%2==1) cout << '.';
            }
            else
            {
                if(j%2==0) cout << '.';
                else if(j%2==1) cout << '#';
            }
        }
        cout << '\n';
    }

    for(int i=0; i<m; i++)
    {
        string s; cin>>s;
        
        for(int j=0; j<l; j++)
        {
            if((i+u)%2==0) cout << e[j%2];
            else cout << o[j%2];
        }

        cout << s;

        for(int j=0; j<r; j++)
        {
            if((i+u)%2==0)
            {
                if((l+n)%2==0) cout << e[j%2];
                else cout << o[j%2];
            }
            else
            {
                if((l+n)%2==0) cout << o[j%2];
                else cout << e[j%2];
            }
        }

        cout << '\n';

    }

    for(int i=0; i<d; i++)
    {
        for(int j=0; j<(l+r+n); j++)
        {
            if((i+u+m)%2==0)
            {
                if(j%2==0) cout << '#';
                else if(j%2==1) cout << '.';
            }
            else
            {
                if(j%2==0) cout << '.';
                else if(j%2==1) cout << '#';
            }
        }
        cout << '\n';
    }

    return (0);
}