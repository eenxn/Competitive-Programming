#include <bits/stdc++.h>
using namespace std;
using str = string;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    str n;
    cin >> n;

    int count =0;
    while (n.length()>1)
    {
        count++;
        long long total = 0;
        for (auto &i: n)
        {
            total += i-'0'; 
        }
        n = to_string(total);
    }


    cout << count;

    return (0);
}