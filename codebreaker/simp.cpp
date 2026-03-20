#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;

    pair<int,int> a; cin>>a.first>>a.second;
    pair<int,int> b; cin>>b.first>>b.second;
    pair<int,int> c; cin>>c.first>>c.second;

    if(b.first < a.first and c.first < a.first)
    {
        if(b.second < a.second and c.second < a.second)
        {   
            cout << "YES" << '\n';
        }
        else if(b.second > a.second and c.second > a.second)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    else if(b.first > a.first and c.first > a.first)
    {
        if(b.second < a.second and c.second < a.second)
        {   
            cout << "YES" << '\n';
        }
        else if(b.second > a.second and c.second > a.second)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
    }


    return (0);
}