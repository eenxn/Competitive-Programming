#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    long long a1 = 1, a2 = 1, ans;
    for (int i=3; i<=n; i++)
    {
        ans = a1+a2;
        a1 = a2;
        a2 = ans;
    }
    printf("%lli\n", ans);

    return (0);
}