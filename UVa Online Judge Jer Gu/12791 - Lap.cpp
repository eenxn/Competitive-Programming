#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a, int b, int mid)
{
    if(a < (b-a)*mid)
    {
        return true;
    }
    return false;
}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int a, b;
    while (cin >> a >> b)
    {
        int l = 1, h=1e9, ans = h;

        while (l<=h)
        {
            int mid = (l+h)/2;

            if(check(a, b, mid))
            {
                if(b == a*mid)
                {
                    ans = mid;
                }
                else{
                    ans = mid+1;
                }
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