#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(0);

    int n;
    cin >> n;

    while(n--)
    {
        int b, sg, sb;
        cin >> b >> sg >> sb;

        priority_queue<int> green, blue;

        while(sg--)
        {
            int t;
            cin >> t;
            green.push(t);
        }
        while(sb--)
        {
            int t;
            cin >> t;
            blue.push(t);
        }


        while (!green.empty() && !blue.empty())
        {
            int battle = min(b, (int)min(green.size(), blue.size()));
            vector<int> g_temp, b_temp;

            for(int i=0; i<battle; i++)
            {
                g_temp.emplace_back(green.top()); green.pop();
                b_temp.emplace_back(blue.top()); blue.pop();
            }

            for(int i=0; i<battle; i++)
            {
                if(g_temp[i] > b_temp[i]) {green.push(g_temp[i]-b_temp[i]);}
                else if(b_temp[i] > g_temp[i]) {blue.push(b_temp[i]-g_temp[i]);}
            }
        }
        

        if(green.empty() && blue.empty())
        {
            cout << "green and blue died" << '\n';
        }
        else if(green.empty())
        {
            cout << "blue wins" << '\n';
            
            while(!blue.empty())
            {
                cout << blue.top() << '\n';
                blue.pop();
            }
        }
        else if(blue.empty())
        {
            cout << "green wins" << '\n';
            
            while(!green.empty())
            {
                cout << green.top() << '\n';
                green.pop();
            }
        }

        if (n) {cout << '\n';}
    }

    return (0);
}