#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n, m;

    while(cin >> n >> m)
    {
        unordered_map<int, vector<int>> data;
        for (int i=1; i<=n; i++)
        {
            int key;
            cin >> key;
            data[key].push_back(i);
        }
        // for(auto [k,v]: data)
        // {
        //     cout<<k<<"-> ";
        //     for(int e:v)
        //     {
        //         cout << e << " ";
        //     }
        //     cout<<'\n';
        // }
        int k, v;
        for (int i=1; i<=m; i++)
        {
            cin >> k >> v;
            if(data.count(v) && k<=(int)data[v].size())
            {
                cout << data[v][k-1] << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }

    return (0);
}