#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef string str;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    deque<int> vi(n);
    for(int i=0; i<n; i++)
    {
        vi[i] = i+1;
    }


    while(n--)
    {

        for(int i=0; i<m-1; i++)
        {
            vi.push_back(vi.front());
            vi.pop_front();
        }
        cout << vi.front() << " ";
        vi.pop_front(); 

        // cout << *it << " ";
        // vi.erase(it);

        // if(it == vi.end())
        // {
        //     it = vi.begin();
        // }
    }

    return (0);
}