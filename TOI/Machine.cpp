#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n;
    cin >> n;

    priority_queue<int, vector<int>> pq;
    while (n--)
    {
        char i;
        cin >> i;

        if (i == 'P')
        {
            int a;
            cin >> a;
            pq.push(a);
        }

        else if (i == 'Q')
        {
            if (pq.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << pq.top() << '\n';
            pq.pop();
        }
    }

    return (0);
}