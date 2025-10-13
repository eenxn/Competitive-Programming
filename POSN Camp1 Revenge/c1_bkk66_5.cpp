#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    str s; cin>>s;
    vector<int> ls(200, 0);

    for(int i=0; i<(int)s.size(); i++)
    {
        ls[(int)s[i]]++;
    }
    
    for(int i=0; i<200; i++)
    {
        if(ls[i] == 1)
        {
            cout << (char)i << '\n';
            return (0);
        }
    }

    return (0);
}