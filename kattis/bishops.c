#include <stdio.h>
#include <math.h>
#define int long long

signed main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int bn = 2*(n-1);
        if(n==1) printf("%d\n", 1);
        else printf("%d\n", bn);
    }

    return (0);
}