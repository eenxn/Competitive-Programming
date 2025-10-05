#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long

int32_t main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    str s; cin>>s;
    vector<int> n(15), m;
    int last_dig = (int)s[15] -48;

    int c = 0;
    for(int i=14; i>=0; i--)
    {
        n[c] = (int)s[i] - 48;
        
        //cout << n[c];
        c++;
    }
    //cout << '\n';

    int cur, ten, one;
    int sum = 0;

    for(int i=0; i<15; i++)
    {
        if(i%2 ==0)
        {
            cur = n[i]*2;
            
            if(cur>=10)
            {
                ten = cur/10; sum+=ten; //cout << ten;
                one = cur%10; sum+=one; //cout << one;
                continue;
            }
            sum+=cur; //cout << cur;
            continue;
        }
        sum+=n[i]; //cout << n[i];
    }
    //cout << '\n';

    if((10-(sum%10))%10 == last_dig) cout << "yes" << '\n';
    else cout << "no" << '\n';
    return (0);
}