#include <bits/stdc++.h>
using namespace std;
long long MOD = 1000000007;

bool isPossible = true;
vector<int> stepalter;
vector<bool> stair;
int memoi(int n)
{
    if (n<0) return (0);
    if (n==0 or n==1) return 1;
    if (stepalter[n] != -1) return stepalter[n];
    if (stair[n-1] and stair[n-2]) return stepalter[n] = (memoi(n-2) + memoi(n-1))%MOD;
    else if (stair[n-1]) return stepalter[n] = memoi(n-1);
    else if (stair[n-2]) return stepalter[n] = memoi(n-2);
    else
    {
        isPossible = false;
        return (0);
    }
}

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, m; cin>>n>>m;
    stepalter.assign(n+1, -1);
    stair.assign(n+1, true);
    while (m--)
    {
        int temp; cin>>temp;
        stair[temp] = false;
    }
    int ans = memoi(n);
    if (!isPossible)
    {
        cout << 0 <<'\n';
        return (0);
    } 
    cout << ans << '\n';

    return (0);
}