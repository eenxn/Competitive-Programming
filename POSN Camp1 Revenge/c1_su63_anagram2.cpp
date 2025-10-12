#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    map<char, int> mp1 = {
        {'A', 0},
        {'B', 0},
        {'C', 0},
        {'D', 0},
        {'E', 0},
        {'F', 0},
        {'G', 0},
        {'H', 0}
    };

    map<char, int> mp2 = {
        {'A', 0},
        {'B', 0},
        {'C', 0},
        {'D', 0},
        {'E', 0},
        {'F', 0},
        {'G', 0},
        {'H', 0}
    };

    str s1, s2; cin >>s1>>s2;

    for(int i=0; i<(int)s1.size(); i++) mp1[s1[i]]++;
    for(int i=0; i<(int)s2.size(); i++) mp2[s2[i]]++;

    vector<int> diff;
    int count = 0;
    for(char i='A'; i<='H'; i++)
    {
        int tdiff = abs(mp1[i]-mp2[i]);
        if (tdiff > 0) count++;
        diff.push_back(tdiff);
    }


    for(auto [k, v]:mp1) cout << v << ' ';
    cout << '\n';
    for(auto [k, v]:mp2) cout << v << ' ';
    cout << '\n';
    for(auto i:diff) cout << i << ' ';

    cout << '\n' << (count>3? "no":"anagram") << '\n';


    return (0);
}