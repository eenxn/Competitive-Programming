#include <bits/stdc++.h>
using namespace std;
#define int long long
#define debug(x) cerr <<#x << " = "<< x << '\n';
const int INF = 4e18;

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int c, p; cin>>c>>p;
    vector<pair<int, int>> contest(c);
    vector<pair<int, int>> problem(p);
    int sat = 0;

    for(int i=0; i<c; i++) cin>>contest[i].first>>contest[i].second;
    for(int i=0; i<p; i++) cin>>problem[i].first>>problem[i].second;
    
    sort(contest.begin(), contest.end());

    vector<int> pfmax(c);

    pfmax[0] = contest[0].second;
    for(int i=1; i<c;i++)
    {
        pfmax[i] = max(pfmax[i-1], contest[i].second);
    }

    for(int i =0; i<p; i++)
    {
        //debug(i)
        auto it = upper_bound(contest.begin(), contest.end(), make_pair(problem[i].first, INF));
        int index = it- contest.begin()-1; //debug(index)

        if (index <0) continue;

        sat+= max(pfmax[index]-problem[i].second, 0LL);
    }

    cout << sat << '\n';

    return (0);
}