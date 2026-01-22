#include <stdio.h>
#include <math.h>
#define int long long

signed main()
{
    int n; scanf("%lld", &n);

    if (n==1) {printf("1\n"); return (0);}

    while(n!=1)
    {
        printf("%lld ", n);
        if(n%2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = (3*n)+1;
        }
    }
    printf("1\n");

    return(0);
}