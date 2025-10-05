#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;

    int sum = 0;
    int max = -1;
    while(q--)
    {
        int n; cin>>n;
        if (n>max)
        {
            max = n;
            sum += n;
        }
    }
    cout << sum << '\n';

    return (0);
}