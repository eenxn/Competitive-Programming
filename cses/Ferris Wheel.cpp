#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, x; cin>>n>>x;

    vector<int> p(n);
    for(int i=0; i<n; i++)
    {
        cin>> p[i];
    }

    sort(p.begin(), p.end());

    int ng = 0;
    int l=0, h=n-1;

    while (l<=h)
    {
        int cursum = p[l]+p[h];

        if(cursum>x)
        {
            ng++;
            h--;
        }
        if(cursum<=x)
        {
            ng++;
            l++;
            h--;
        }
    }

    cout << ng <<'\n';

    return (0);
}