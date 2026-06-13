#include <bits/stdc++.h>
using namespace std;
#define int long long

int findMaxValue(string coupons) {
    stringstream ss(coupons);
    vector<int> coup;

    int temp;
    coup.push_back(0);
    while (ss >> temp) {
        coup.push_back(temp);
    }

    if (coup.size() == 1) return 0;

    vector<int> dp(coup.size(), 0);
    dp[1] = coup[1];

    for(int i=2; i<coup.size(); i++)
    {
        dp[i] = max(dp[i-1], dp[i-2]+coup[i]);
    }
    
    return dp[coup.size()-1];
}

signed main()
{
    string coupons;
    getline(cin, coupons);

    int result = findMaxValue(coupons);
    cout << result << '\n';
}