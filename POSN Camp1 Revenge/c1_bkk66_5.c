#include <stdio.h>
#include <string.h>

int main()
{
    char s[21]; scanf("%s", s);
    char ls[200] = {0};

    for (int i=0; i<(int)strlen(s); i++)
    {
        ls[(int)s[i]]++;
    }

    for (int i =0; i<200; i++)
    {
        if (ls[i] == 1)
        {
            printf("%c\n", (char)i);
            return (0);
        }
    }

    return (0);
}