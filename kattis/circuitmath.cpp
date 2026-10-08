#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<bool> vt(n);
    for(int i=0; i<n; i++)
    {
        char chr; cin>>chr;
        if(chr=='T') vt[i] = true;
        else vt[i] = false;
    }

    char inp;
    stack<bool> stk;
    while(cin>>inp)
    {
        if(isalpha(inp)) stk.push(vt[inp-'A']);
        else
        {
            if(inp == '*')
            {
                int a,b;
                b = stk.top(); stk.pop();
                a = stk.top(); stk.pop();
                stk.push(a and b);
            }
            else if(inp == '+')
            {
                int a,b;
                b = stk.top(); stk.pop();
                a = stk.top(); stk.pop();
                stk.push(a or b);
            }
            else if(inp == '-')
            {
                int b;
                b = stk.top(); stk.pop();
                stk.push(not b);
            }
        }
    }

    cout << (stk.top()? 'T':'F') << '\n';

    return (0);
}