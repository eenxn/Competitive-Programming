#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    long long n, m;
    cin >> n >> m;
    long long n1 = n;

    vector<long long> r;
    vector<long long> score;
    score.push_back(0);
    vector<long long> money_byebye;
    money_byebye.push_back(0);

    while(n--)
    {
        long long temp;
        cin >> temp;
        r.push_back(temp);

        if(temp<0)
        {
            money_byebye.push_back(abs(money_byebye.back()) + abs(temp));
            score.push_back(score.back() + 0);
            // cout << "into score" <<  score.back() << '\n';
            // cout << "into money" <<  money_byebye.back() << '\n';
        }
        else
        {
            score.push_back(score.back() + temp);
            money_byebye.push_back(abs(money_byebye.back() + 0));
            // cout << "into score" <<  score.back() << '\n';
            // cout << "into money" <<  money_byebye.back() << '\n';
        }
    }

    // for (auto &p: money_byebye)
    // {
    //     cout << p << " ";
    // }
    // cout << "\n";
    
    // for (auto &p: score)
    // {
    //     cout << p << " ";
    // }
    // cout << "\n";

    // cout << score.size();
    // cout << money_byebye.size();

    while(m--)
    {
        long long x, h;
        cin >> x >> h;

        long long lb = money_byebye[x] + h;
        auto it = lower_bound(money_byebye.begin() + x, money_byebye.end(), lb);
        long long idx = (it != money_byebye.end()? it - money_byebye.begin() -1 : n1);

        if(idx<x)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << score[idx] - score[x] << '\n';
        }
    }



    return (0);
}