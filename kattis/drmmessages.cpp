#include <bits/stdc++.h>
using namespace std;
#define int long long
string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string rotate(string s)
{
    int sum=0;
    for(int i=0; i<s.size(); i++) sum+=alp.find(s[i]);
    for(int i=0; i<s.size(); i++) s[i] = (((s[i]-'A')+sum)%26) + 'A';

    return s;
}

signed main()
{
    cin.tie(0); ios::sync_with_stdio(0);
    string DRM; cin>>DRM;

    string s1=DRM.substr(0,DRM.size()/2) ,s2=DRM.substr(DRM.size()/2);
    s1 = rotate(s1);
    s2 = rotate(s2);

    string ans;
    for(int i=0; i<s1.size(); i++)
    {
        ans += (((s1[i]-'A')+(s2[i]-'A'))%26)+'A';
    }

    cout << ans << '\n';

    return (0);
}