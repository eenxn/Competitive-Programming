#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> o;
    while(n--)
    {
        int x, y = 1;
        cin >> x;
        while(x%2 == 0)
        {
            x /= 2;
            y *= 2;
        }
        while(y--)
        {
            o.push_back(x);
        }
    }

    int q;
    cin >> q;
    while(q--)
    {
        int j;
        cin >> j;

        cout << o[j-1] << nl;
    }

    return (0);
}