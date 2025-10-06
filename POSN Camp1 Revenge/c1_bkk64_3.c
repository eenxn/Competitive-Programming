#include <stdio.h>
#include <string.h>

int main()
{
    char s[12]; scanf("%s", s);

    int sum = 0, cur;
    int i = 0;
    while(s[i])
    {
        cur = (int)s[i]-48;
        sum += cur;
        i++;
    }

    printf("%d\n", sum);

    return (0);
}