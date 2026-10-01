#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    string s;
    set<string> st;
    int size_s = 0;
    while(cin>>s)
    {
        size_s++;
        st.insert(s);
    }

    if(st.size() != size_s) cout << "no" << '\n';
    else cout << "yes" << '\n';

    return (0);
}