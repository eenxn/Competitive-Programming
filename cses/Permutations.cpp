#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;

    if(n==1)
    {
        cout << 1 << '\n';
        return (0);
    }
    
    if(n<=3)
    {
        cout << "NO SOLUTION" << '\n';
        return (0);
    }

    if(n==4)
    {
        cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3 << '\n';
        return (0);
    }

    map<int, int> x; 
    int c = 1;
    for(int i=1; i<=n; i+=2)
    {
        x[i] = c++;
    }
    for(int i=2; i<=n; i+=2)
    {
        x[i] = c++;
    }

    for(auto [k,v]: x)
    {
        cout << v << ' ';
    }
    cout << '\n';

    return (0);
}