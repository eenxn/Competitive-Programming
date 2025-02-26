#include <bits/stdc++.h>
using namespace std;
using str = string;
using vs = vector<str>;
using dis = deque<int, str>;
using vpis = vector<pair<int, str>>;
const char nl = '\n';

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int nc, n;
    cin >> nc >> n;

    vpis a;
    for(int i=0; i<n; i++)
    {
        int ns;
        str id;
        cin >> ns >> id;

        if(ns>=1 && ns<=nc)
        {
            a.emplace_back(ns, id);
        }
    }

    str cmd;
    deque<pair<int, str>> Q;
    deque<pair<int, str>> tempQ;
    while(cin >> cmd && cmd != "x")
    {
        if(cmd == "E")
        {
            str id;
            cin >> id;

            bool isFound = false;
            pair<int, str> cur;
            for(const auto &c: a)
            {
                if(id == c.second)
                {
                    cur = c;
                    isFound = true;
                    break;
                }
            }
            if(!isFound)
            {
                continue;
            }

            if(Q.empty())
            {
                Q.emplace_back(cur);
            }
            else
            {
                int idx = -1;
                bool insert = false;
                while (!Q.empty())
                {
                    auto front = Q.front();
                    Q.pop_front();
                    tempQ.push_back(front);
                    if(front.first == cur.first)
                    {
                        idx = tempQ.size();
                    }
                }
                if(idx != -1)
                {
                    tempQ.insert(tempQ.begin()+idx, cur);
                    insert = true;
                }
                if(!insert)
                {
                    tempQ.emplace_back(cur);
                }
                swap(Q, tempQ);
            }
        }

        if(cmd == "D")
        {
            cout << Q.front().second << nl;
            Q.pop_front();
        }

    }

    cout << 0 << nl;

    return (0);
}
