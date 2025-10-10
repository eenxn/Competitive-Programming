#include <stdio.h>
#include <string.h>

int main()
{
    char s[100]; scanf("%s", s);
    //char n[6]; 

    int counter = 0;
    for (int i=0; i<(int)strlen(s); i++)
    {
        if (counter == 0)
        {
            if (s[i] == 'h')
            {
                counter++;
            }
        }
        else if (counter == 1)
        {
            if (s[i] == 'e')
            {
                counter++;
            }
        }
        else if (counter == 2)
        {
            if (s[i] == 'l')
            {
                counter++;
            }
        }
        else if (counter == 3)
        {
            if (s[i] == 'l')
            {
                counter++;
            }
        }
        else if (counter == 4)
        {
            if (s[i] == 'o')
            {
                counter++;
            }
        }
    }

    // if (counter == 5)
    // {
    //     printf("YES\n");
    //     return (0);
    // }
    // printf("NO\n");

    printf(counter==5? "YES\n":"NO\n");

    return (0);
}