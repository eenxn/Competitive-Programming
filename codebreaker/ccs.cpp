#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios:: sync_with_stdio(0);

    int n, q; cin>>n>>q;
    //vector<int> cat(n+1,1);
    set<int> sleep;

    while(q--)
    {
        string event; cin>>event;
        if (event == "SLEEP")
        {
            int cur; cin>>cur;
            //cat[cur] = 0;
            sleep.emplace(cur);
        }
        else if (event == "WAKE")
        {
            int cur; cin>>cur;
            //cat[cur] = 1;
            sleep.erase(cur);
        }
        else
        {
            int from, to; cin>>from>>to;
            auto it = sleep.lower_bound(from);

            if(it == sleep.end())
            {
                cout << "YES" << '\n';
                continue;
            }

            if (*it <= to) cout << "NO" << '\n';
            else cout << "YES" << '\n';

            
        }
    }

    return (0);
}