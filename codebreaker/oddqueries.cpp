#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, q; cin>>n>>q;

    vector<int> arr(n+1);
    vector<int> pfsum(n+1, 0);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        pfsum[i] = pfsum[i-1] + arr[i];
    }

    while(q--)
    {
        int l, r, k; cin>>l>>r>>k;

        int sum = pfsum[n]-(pfsum[r]-pfsum[l-1])+((r-l+1)*k);

        cout << (sum%2==1? "YES":"NO") << '\n';

    }

    return (0);
}