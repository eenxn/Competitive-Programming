#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e18+5;

bool isOk(int mid, vector<int> &k, int n, int t)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += mid/k[i];
        if(sum>=t) return true;
    }
    return sum>=t;
}

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n,t; cin>>n>>t;
    vector<int> k(n+1);
    for(int i=1; i<=n; i++) cin>>k[i];

    int l=0, h=MAX, ans, mid;
    while(l<=h)
    {
        mid = (l+h)/2;

        if(isOk(mid, k, n, t))
        {
            h=mid-1;
            ans = mid;
        }
        else
        {
            l = mid+1;
        }

    }

    cout << ans << '\n';

    return (0);
}