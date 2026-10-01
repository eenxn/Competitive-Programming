#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    string s; cin>>s;
    deque<char> stk;

    for(auto c:s)
    {
        if(!stk.empty() and c=='<') 
        {
            stk.pop_back();
            continue;
        }
        stk.push_back(c);       
    }

    for(auto c:stk)
    {
        cout << stk.front();
        stk.pop_front();
    }

    return (0);
}