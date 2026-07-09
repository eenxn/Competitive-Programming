#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isValid(int k, int d, int m)
{
    int sum = k;
    int divisor = d;
    int count = 1;

    if(sum>=m) return true;
    while(k>=divisor)
    {
        
        sum += (k/divisor);
        divisor *= (d+count);
        count++;
        
        if (sum >= m) return true;
    }
    return false;
}

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int m,d; cin>>m>>d;

    int l=1,h=1e15, ans;
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if(isValid(mid, d, m)) 
        {
            h = mid-1;
            ans = mid;
        }

        else
        {
            l = mid+1;
        }

    }

    cout << ans << '\n';

    return (0);
}