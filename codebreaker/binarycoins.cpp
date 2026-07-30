#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    uint64_t b; cin>>b;

    unsigned int cnt = 0;
    for(int i=0; i<64; i++) if((b>>i)&1) cnt++;

    cout << cnt << '\n';

    return (0);
}