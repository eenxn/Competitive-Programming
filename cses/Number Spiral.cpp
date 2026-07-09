#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int t; cin>>t;
    while(t--)
    {
        int c, r; cin>>r>>c;
        if(r==c) cout << (r*r)-r+1 << '\n';
        else if(r>c)
        {
            int n = (r*r)-r+1;
            if(r%2==0) cout << n+(r-c) << '\n';
            else if(r%2==1) cout << n-(r-c) << '\n';
        }
        else
        {
            int n = (c*c)-c+1;
            if(c%2==0) cout << n-(c-r) << '\n';
            else if(c%2==1) cout << n+(c-r) << '\n';
        }
    }

    return (0);
}