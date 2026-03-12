#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n,m,k; cin>>n>>m>>k;

    vector<int> wants(n);
    deque<int> sizes(m);

    for(int i=0; i<n; i++)
    {
        cin >> wants[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> sizes[i];
    }

    sort(wants.begin(), wants.end());
    sort(sizes.begin(), sizes.end());

    // auto it = upper_bound(sizes.begin(), sizes.end(), wants[0]-k);
    // sizes.erase(sizes.begin(), it);

    // if(it == sizes.end())
    // {
    //     cout << 0 << '\n';
    //     return (0);
    // }

    int curwants = 0;
    int cursizes = 0;
    int ans = 0;
    while(curwants<n and cursizes<m)
    {
        if(wants[curwants]+k < sizes[cursizes])
        {
            curwants++;
        }
        else if(wants[curwants]-k > sizes[cursizes])
        {
            cursizes++;
        }
        else
        {
            ans++;
            curwants++;
            cursizes++;
        }
    }

    cout << ans << '\n';
    
    return (0);
}