#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, a, b; cin>>n>>a>>b;
    vector<int> phys(n+1, 0), bio(n+1), diff(n+1);
    int psum=0;
    for(int i=1; i<=n; i++) 
    {
        cin>>phys[i]; 
        psum+=phys[i];
    }
    for(int i=1; i<=n; i++) 
    {
        cin>>bio[i];
        diff[i] = bio[i]-phys[i];
    } 
    sort(diff.begin()+1, diff.end(), greater<int>());

    for(int i=1; i<=b; i++) psum+=diff[i];

    cout << psum << '\n';

    return (0);
}