#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int q; scanf("%d", &q);

    while (q--)
    {
        int n, a; scanf("%d%d", &n, &a);

        for(int i=1; i<n; i++)
        {
            int t; scanf("%d", &t);
            if(a-t != -1) 
            {
                printf("%d\n", i+1);
            }
            else
            {
                a=t;
            }

        }
    }
    
    return (0);
}