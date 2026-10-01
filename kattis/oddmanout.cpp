#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int q; cin>>q;
    int cse=1;
    while(q--)
    {
        int n; cin>>n;
        set<int> st;

        for(int i=0; i<n; i++)
        {
            int g; cin>>g;
            if(st.count(g))
            {
                st.erase(g);
                continue;
            }
            st.insert(g);
        }

        cout << "Case #" << cse++ << ": " << *st.begin() << '\n';
    }

    return (0);
}