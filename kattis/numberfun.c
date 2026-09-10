#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q; scanf("%d", &q);

    while (q--)
    {
        int a,b,c; scanf("%d%d%d", &a, &b, &c);

        if(a+b==c || abs(a-b) == c || a*b == c || a*c == b || b*c == a) printf("Possible\n");
        else printf("Impossible\n");
    }

    return (0);
}