#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    cin.ignore();
    string s; getline(cin, s); //cout << s << '\n';
    deque<char> stk;

    for(int i=0; i<n; i++)
    {
        if(isspace(s[i])) continue;
        if(s[i] == '(' or s[i] == '[' or s[i] == '{') stk.push_back(s[i]);
        else
        {
            if(!stk.empty())
            {
                if(s[i] == ')' and stk.back() == '(') stk.pop_back();
                else if(s[i] == ']' and stk.back() == '[') stk.pop_back();
                else if(s[i] == '}' and stk.back() == '{') stk.pop_back();
                else
                {
                    cout << s[i] << ' ' << i << '\n';
                    return (0);
                }
            }
            else
            {
                cout << s[i] << ' ' << i << '\n';
                return (0);
            }
        }
    }

    cout << "ok so far" << '\n';

    return (0);
}