#include <bits/stdc++.h>
using namespace std;
#define int uint64_t

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    string a; getline(cin,a);
    vector<int> alpha(26, 0);
    vector<int> dp(26,0);
    dp[0] = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(!isalpha(a[i])) continue;

        int cur = tolower(a[i])-'a';
        if(cur == 0) dp[cur]++; 
        else if(alpha[cur] == 0) dp[cur] = dp[cur-1];
        else dp[cur]+=dp[cur-1];
        
        alpha[cur]++; 
    }

    cout << dp[25] << '\n';

    return (0);
}