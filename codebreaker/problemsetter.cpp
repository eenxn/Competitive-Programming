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

    int mx;
    for(int i =0; i<p; i++)
    {
        //debug(i)
        mx = 0;
        auto it = upper_bound(contest.begin(), contest.end(), make_pair(problem[i].first, INF));
        int index = it- contest.begin()-1;
            // if(problem[i].first >= contest[j].first)
            // {
            //     int cur = contest[j].second-problem[i].second;
            //     if(cur>mx and cur >=0)
            //     {
            //         mx = cur;
            //         //debug(mx)
            //     }
            // }
            
        sat += mx;
        //debug(sat)
    }

    cout << sat << '\n';

    return (0);
}