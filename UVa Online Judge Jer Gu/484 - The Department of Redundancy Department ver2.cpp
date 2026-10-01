#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    map<int,int> od, fq;

    int n, ord=1;
    while(cin>>n)
    {
        if(!fq.count(n)) {od[ord] = n; ord++;}
        fq[n]++;
    }

    for(auto [k,v]:od)
    {
        cout << v << ' ' << fq[v] << '\n';
    }
    
    return (0);
}