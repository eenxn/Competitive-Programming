#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    str s; cin>>s;

    if(n%2==1)
    {
        cout << "No" << '\n';
        return (0);
    }

    str s1=s.substr(0,n/2), s2=s.substr(n/2);

    if(s1==s2) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return (0);
}