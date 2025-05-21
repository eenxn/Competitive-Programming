#include <bits/stdc++.h>
using namespace std;
using str = string;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n;
    str s;
    unordered_map<str, int> m;
    while (cin >> n >> s)
    {
        m.clear();
        for(size_t i=0; i< s.size()-n+1; i++)
        {
            str temp = s.substr(i, n);

            if(m.find(temp) != m.end())
            {
                m[temp]++;
            }
            else
            {
                m[temp] = 1;
            }
        }

        int max = -2e9;
        str kuy;

        for (auto [k, v]: m)
        {
            if (v > max)
            {
                kuy = k;
                max = v;
            }
        }
        cout << kuy << '\n';

    }

    return (0);
}