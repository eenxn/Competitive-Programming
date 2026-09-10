#include <stdio.h>

int main()
{
    int q; scanf("%d", &q);

    while (q--)
    {
        char chr[15]; scanf("%s", chr);
        if(chr[0]=='P') 
        {
            printf("skipped\n");
        }
        else
        {
            int a,b;
            sscanf(chr, "%d+%d", &a, &b);
            printf("%d\n", a+b);
        }
    }

    return (0);
}