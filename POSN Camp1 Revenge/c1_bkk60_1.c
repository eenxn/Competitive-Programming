#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for (int i=2; i<n; i++)
    {
        int cnt=0;
        for (int j=1; j<=(i/2); j++)
        {
            if(i%j ==0) cnt++;
        }
        if(cnt ==1)
        {
            printf("%d\n", i);
        }
    }


    return (0);
}