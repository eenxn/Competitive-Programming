#include <bits/stdc++.h>
using namespace std;
using di = deque<int>;
using vi = vector<int>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    di wheel(n);

    for(int i=0; i<n; i++)
    {
        cin >> wheel[i];
    }

    vi ts(k, 0);
    int i = 0;
    while(n--)
    {
        int temp;
        cin >> temp;

        for(int i=0; i<temp; i++)
        {
            wheel.push_back(wheel.front());
            wheel.pop_front();
        }
        
        ts[i++ % k] += wheel.front();
        wheel.pop_front();
    }

    for(const int &i:ts) {cout << i << nl;}

    return (0);
}