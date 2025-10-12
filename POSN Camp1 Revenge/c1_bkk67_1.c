#include <stdio.h>
#include <string.h>

int main()
{
    char n[31]; scanf("%s",n);
    char s[200];

    for (int i=0; i<(int)strlen(n); i++)
    {
        s[(int)n[i]] = '1';
    }

    for (int i=0; i<200; i++)
    {
        if (s[i] == '1')
        {
            printf("%c ", (char)i);
        }
    }
    printf("\n");

    return (0);
}