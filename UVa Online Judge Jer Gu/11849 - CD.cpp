#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int m, n;
    while (cin >> m >> n && m!=0 && n!=0)
    {
        int total_count = 0;
        unordered_set<int> c;
        for(int i=0; i<m; i++)
        {
            int temp;
            cin >> temp;
            c.insert(temp);
        }
        for(int i=0; i<n; i++)
        {
            int temp;
            cin >> temp;
            
            if (c.find(temp) != c.end())
            {
                total_count++;
            }
        }

        
        cout << total_count << '\n';
    }

    return (0);
}