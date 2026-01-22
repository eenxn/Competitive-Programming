#include <stdio.h>
#include <math.h>
#define int long long

int arr[(int)2e5+5];

signed main()
{
    int n; scanf("%lld", &n);

    for (int i = 1; i<=n; i++)
    {
        arr[i] = i;
    }

    for (int i =1; i<=n; i++)
    {
        int cur_num; scanf("%lld", &cur_num);
        arr[cur_num] = 0;
    }

    for (int i =1; i<=n; i++)
    {
        if(arr[i] !=0)
        {
            printf("%lld", arr[i]);
        }
    }

    return (0);
}