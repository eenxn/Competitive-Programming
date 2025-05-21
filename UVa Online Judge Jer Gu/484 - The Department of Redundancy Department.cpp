#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    
    int n;
    vector<int> order;
    unordered_map<int, int> m;
    while (cin >> n)
    {
        if (m.find(n) != m.end())
        {
            m[n]++;
        }
        else
        {
            order.push_back(n);
            m[n] = 1;
        }
    }
    for(auto &i : order)
    {
        cout << i << " " << m[i] << '\n';
    }

    return (0);
}