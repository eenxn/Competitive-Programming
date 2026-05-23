#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr <<#x << " = "<< x << '\n';

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int t; cin>>t;

    vector<int> allsum(2e5+1, 0);
    for(int i=1; i<=2e5+1; i++)
    {
        int curn = i;
        int cursum = 0;
        while(curn>=1)
        {
            cursum += (curn%10);
            curn/=10;
        }
        allsum[i] = allsum[i-1]+cursum;
    }

    while(t--)
    {
        int n; cin>>n;
        cout << allsum[n] << '\n';
    }

    return (0);
}