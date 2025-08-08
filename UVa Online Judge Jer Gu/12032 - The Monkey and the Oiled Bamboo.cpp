#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> a;


bool check(int k)
{
    for (int i=0; i<a.size()-1; i++)
    {
        int d = a[i+1] - a[i];

        if(d == k)
        {
            k--;
        }
        else if(d>k)
        {
            return false;
        }

        if (k < 0)
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int testcase; cin >> testcase;
    int totalt = testcase;

    while (testcase--)
    {
        int n; cin>>n;
        a.resize(n+1);

        a[0] = 0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i+1];
        }

        int l =0, h=1e9, ans =0;
        while (l<=h)
        {
            int mid = (l+h)/2;
            //cout << mid << '\n';

            if(check(mid))
            {
                ans = mid;
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }

        cout << "Case " << totalt - testcase << ": " << ans << '\n';
    }

    return (0);
}