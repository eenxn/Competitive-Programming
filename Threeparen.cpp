#include <bits/stdc++.h>
using namespace std;
typedef string str;
const char nl = '\n';
using sc = stack<char>;

int main()
{
    cin.tie(nullptr); ios::sync_with_stdio(false);

    int n;
    cin >> n;

    
    while(n--)
    {
        str s;
        cin >> s;
        
        bool correct = true;
        
        sc parens;
        
        for(const char &c:s)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                parens.push(c);
            }
            else
            {
                
                if((parens.empty()) || !(
                    (parens.top() == '(' && c == ')') || 
                    (parens.top() == '{' && c == '}') || 
                    (parens.top() == '[' && c == ']')))
                {
                    correct = false;
                    break;
                }
                parens.pop();

            }
        }

        if(!parens.empty()) 
        {
            correct = false;
        }
        
        cout << (correct? "yes":"no") << nl;
    }

    return (0);
}