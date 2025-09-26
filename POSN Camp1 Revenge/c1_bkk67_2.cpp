#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    str a1, a2; cin >> a1 >> a2;
    vector<int> arr(150, -1);

    for(int i=0; i<(int)a1.size(); i++)
    {
        for(int j=0; j<(int)a2.size(); j++)
        {
            if(a1[i] == a2[j]) arr[(int)a1[i]]++; 
        }
    }

    for (int i=0; i<150; i++) if(arr[i]!=-1) cout << (char)i << ' ';

    cout << '\n';

    return (0);
}