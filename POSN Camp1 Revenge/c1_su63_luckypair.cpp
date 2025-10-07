#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;
    vector<int> n(q);
    bool isCouple = false;

    int i = 0;
    while(q--) cin>>n[i++];

    int luckyn; cin>>luckyn;

    for(int i=0; i<(int)n.size()-1; i++)
    {
        for(int j=i+1; j<(int)n.size();j++)
        {
            if(n[i]+n[j] == luckyn)
            {
                cout<<n[i]<<' '<<n[j]<<'\n';
                isCouple = true;
            }
        }
    }

    if(!isCouple) cout << "No\n";

    return (0);
}