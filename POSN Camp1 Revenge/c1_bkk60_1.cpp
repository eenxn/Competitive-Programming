#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    
    for(int i=2; i<n; i++)
    {
        int cnt = 0;
        for(int j=1; j<=(i/2); j++)
        {
            if(i%j == 0) cnt++;
        }

        if(cnt==1)
        {
            cout << i << '\n';
        }
    }

    return (0);
}