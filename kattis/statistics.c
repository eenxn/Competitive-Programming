#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, cse=1;
    while(scanf("%d", &n) != EOF)
    {
        int mx = -1000001, mn=1000000;
        for(int i=0; i<n; i++)
        {
            int t; scanf("%d", &t);
            if (t>mx) mx=t;
            if (t<mn) mn=t;
        }

        printf("Case %d: %d %d %d\n", cse, mn, mx, mx-mn);
        cse++;
    }
}