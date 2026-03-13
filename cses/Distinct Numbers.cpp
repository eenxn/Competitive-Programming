#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr << #x << " = " << x << '\n';

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    set<int> x;

    for(int i=0; i<n; i++) 
    {
        int temp; cin>>temp;
        x.emplace(temp);
    }

    cout << x.size() << '\n';
    

    return (0);
}