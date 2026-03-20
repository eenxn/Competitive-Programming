#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;

    while(q--)
    {
        int a, b, c, d; cin>>a>>b>>c>>d;

        int l=1, h=100000;
        while(l<=h)
        {
            int mid = (l+h)/2;

            if((a*mid*mid*mid)+(b*(mid*mid))+(c*mid) >= d) h = mid-1;
            else if((a*mid*mid*mid)+(b*(mid*mid))+(c*mid) < d) l = mid+1;
        }

        cout << l << '\n';
    }

    return (0);
}