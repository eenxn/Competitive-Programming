#include <bits/stdc++.h>
using namespace std;
using str = string;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(0);

    str s;
    set<str> xl;
    while(cin >> s)
    {
        str xs;
        for(auto &c: s)
        {
            if((c>=65 && c<=90) || (c>=97 && c<=122))
            {
                xs.push_back(tolower(c));
            }
            else
            {
                if(!xs.empty())
                {
                    xl.insert(xs);
                    xs.clear();
                }
            }
        }
        if(!xs.empty())
        {
            xl.insert(xs);
        }
        
    }

    for(auto &a: xl)
    {
        cout << a << '\n';
    }

    return (0);
}