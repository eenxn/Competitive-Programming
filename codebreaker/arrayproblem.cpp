#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, k; cin>>n>>k;
    
    vector<int> a(n);
    vector<int> pfx(n);
    for(int i=0; i<n; i++) cin>>a[i];

    pfx[0] = a[0];
    for(int i=1; i<n; i++) 
    {
        pfx[i] = pfx[i-1]+a[i];
    }

    int abstotal= k*pfx[n-1];
    pfx.pop_back();

    sort(pfx.begin(), pfx.end());

    int total = 0;
    for(int i=0; i<k-1; i++)
    {
        total += pfx[i];
    }

    abstotal -= total;

    cout << abstotal << '\n';



    return (0);
}