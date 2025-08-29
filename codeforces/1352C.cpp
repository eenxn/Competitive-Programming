#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int mid , int k, int n)
{
    int pos = mid - (mid/n);

    if (pos>=k)
    {
        return true;
    }
    return false;
}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int t; cin>>t;

    while (t--)
    {
        int n, k; cin >> n >> k;

        // int ans = k + ((k-1)/(n-1));
        // cout << ans << '\n';

        int l = 1, h = 2e9, ans = l;

        while(l<=h)
        {
            int mid = (l+h)/2;

            if(check(mid, k, n))
            {
                ans = mid;
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }

        cout << ans << '\n';
    }


    return (0);
}