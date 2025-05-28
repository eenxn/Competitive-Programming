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

        vector<int> gw;
        vector<int> bw;
        while(b--)
        {
            int g_temp, b_temp;
            g_temp = green.top();
            b_temp = blue.top();
            green.pop();
            blue.pop();

            if(g_temp > b_temp)
            {
                gw.push_back(g_temp-b_temp);
            }
            else if(g_temp < b_temp)
            {
                bw.push_back(b_temp-g_temp);
            }
        }
        for(auto &i: gw)
        {
            green.push(i);
        }
        for(auto &i: bw)
        {
            blue.push(i);
        }

        if(!green.empty() && !blue.empty())
        {
            if(green.size() < blue.size())
            {
                int s;
                s = green.size();
                while(s--)
                {
                    int g_temp, b_temp;
                    g_temp = green.top();
                    b_temp = blue.top();
                    green.pop();
                    blue.pop();

                    if(g_temp > b_temp)
                    {
                        gw.push_back(g_temp-b_temp);
                    }
                    else if(g_temp < b_temp)
                    {
                        bw.push_back(b_temp-g_temp);
                    }
                }
            }

            else
            {
                int s;
                s = blue.size();
                while(s--)
                {
                    int g_temp, b_temp;
                    g_temp = green.top();
                    b_temp = blue.top();
                    green.pop();
                    blue.pop();

                    if(g_temp > b_temp)
                    {
                        gw.push_back(g_temp-b_temp);
                    }
                    else if(g_temp < b_temp)
                    {
                        bw.push_back(b_temp-g_temp);
                    }
                }
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

        cout << '\n';
    }

    return (0);
}