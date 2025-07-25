#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int t=0;
    if (n>=100)
    {
        t+= n/100;
        n%=100;
    }
    if (n>=20)
    {
        t+= n/20;
        n%=20;
    }
    if (n>=10)
    {
        t+= n/10;
        n%=10;
    }
    if (n>=5)
    {
        t+= n/5;
        n%=5;
    }
    if (n>=1)
    {
        t+=n;
    }

    cout << t << '\n';

    return (0);
}