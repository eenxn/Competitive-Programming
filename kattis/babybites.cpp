#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {   
        string s; cin>>s;
        if(s== "mumble") continue;
        int x = stoi(s);
        if(x!=i) 
        {
            cout << "something is fishy" << '\n';
            return (0);
        }
    }
    
    cout << "makes sense" << '\n';

    return (0);
}