#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef string str;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> vi(n);
    for(int i=0; i<n; i++)
    {
        vi[i] = i+1;
    }

    auto it = vi.begin();

    while(n--)
    {
        for(int i=1; i<m; i++)
        {
            it++;
            if(it == vi.end())
            {
                it = vi.begin();
            }
        }
        cout << *it << " ";
        vi.erase(it);

        if(it == vi.end())
        {
            it = vi.begin();
        }
    }

    return (0);
}