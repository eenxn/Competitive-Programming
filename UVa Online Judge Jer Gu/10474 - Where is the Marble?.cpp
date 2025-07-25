#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0); ios::sync_with_stdio(0);

    int n, q, k =0;
    while ((cin>>n && cin>>q) && (q!=0 && n!=0))
    {
        k++;
        cout << "CASE# " << k << ":" << '\n';

        vector<int> x(n);
        for (int i=0; i<n; i++)
        {
            cin >> x[i];
        }
        
        sort(x.begin(), x.end());

        while (q--)
        {
            int y;
            cin >> y;

            auto it = lower_bound(x.begin(), x.end(), y);

            if (*it == y)
            {
                cout << *it << " found at " << it-x.begin() +1 << '\n';
            }
            else
            {
                cout << y << " not found" << '\n';
            }
        }
    }

    return (0);
}