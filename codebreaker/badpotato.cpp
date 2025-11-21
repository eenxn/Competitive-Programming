#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n; cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin>>arr[i];

    int mx = 0, sum = 0;
    if(arr[0]>-1)
    {
        mx = arr[0];
        sum = arr[0];
    }

    for (int i=1; i<n; i++)
    {
        if (arr[i] == -1) sum = 0;
        else
        {
            sum = max(arr[i], sum+arr[i]);
            mx = max(mx, sum);
        }
    }
    
    cout << mx <<'\n';

    return (0);
}