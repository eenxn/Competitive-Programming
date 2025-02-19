#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef string str;
typedef long long ll;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    stack<str> ss;

    int n;
    cin >> n;

    while(n--)
    {
        str cond, v;
        cin >> cond;

        if(cond == "push")
        {
            cin >> v;

            ss.push(v);
        }
        else
        {
            if(ss.empty())
            {
                cout << "null" << nl;
            }
            else
            {
                cout << ss.top() << nl;
                ss.pop();
            }
        }


    }

    return (0);
}
