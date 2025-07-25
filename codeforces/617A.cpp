#include <bits/stdc++.h>
using namespace std;
using str = string;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int x;
    cin >> x;

    int step = x/5;
    
    if (x%5 == 0)
    {
        cout << step;
    }
    else
    {
        cout << step+1;
    }


    return (0);
}