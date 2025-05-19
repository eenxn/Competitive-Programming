#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int nc, ns;
    cin >> nc >> ns;
    map<int, int> mp;

    while (ns--)
    {
        int a, b;
            cin >> a >> b;
        mp.emplace(b, a);
    }

    char o;
    deque<int> q;
    unordered_map<int, deque<int>> ump;
    while(cin >> o && o != 'X')
    {
        if (o == 'E')
        {
            int cc;

            int id;
            cin >> id;

            auto it = mp.find(id);
            if (it != mp.end())
            {
                cc = (*it).second;
            }
            else    
            {
                continue;
            }

            bool isIn = false;
            for (auto &p : q)
            {
                if (p == cc)
                {
                    isIn == true;
                    break;
                }
            }

            if (isIn == false)
            {
                q.push_back(cc);
            }   

            ump[cc].push_back(id);
        }
        else if (o == 'D')
        {
            if (q.empty())
            {
                cout << "empty";
            }
            else
            {
                cout << ump[q.front()].front() << '\n';
                ump[q.front()].pop_front();
                if (ump[q.front()].empty())
                {
                    q.pop_front();
                }
            }
        }
    }
    cout << 0;

    return (0);
}