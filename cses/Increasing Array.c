#include <stdio.h>
#define int long long

int main()
{
    int n; scanf("%lld", &n);
    int arr[n+1];
    int moves=0;

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            moves+= (arr[i-1] - arr[i]);
            arr[i]=arr[i-1];
        }
    }

    printf("%lld", moves);

    return (0);
}