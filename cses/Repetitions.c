#include <stdio.h>
#include <math.h>
#include <string.h>
#define int long long

signed main()
{
    char a[1000005]; scanf("%s", a);

    int remost = 1;
    int curre = 1;
    for(int i=1; i<(int)strlen(a); i++)
    {
        if (a[i] == a[i-1]) curre++;
        else
        {
            curre = 1;
        }
        if (curre > remost) remost = curre;
    }

    printf("%lld\n", remost);

    return (0);
}