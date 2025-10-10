#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;
    int odd=0, even=0;

    for(int i=0; i<q; i++)
    {
        int cur; cin>>cur;
        if (cur%2==0) even++;
        else odd++;
    }

    cout << odd*even << '\n';
    


    return (0);
}