#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    stack<int> a;
    int i; cin>> i; a.push(i);

    for(int i=1; i<n; i++)
    {
        int cur; cin>>cur;

        while(!a.empty() and cur>=a.top())
        {
            a.pop();
        }
        a.push(cur);
    }

    while(!a.empty())
    {
        cout << a.top() << '\n';
        a.pop();
    }

    return (0);
}