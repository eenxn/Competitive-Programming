#include <stdio.h>
#include <math.h>

int main()
{
    int n; scanf("%d", &n);

    int ans =2, pow=1;
    for (int i=0; i<n; i++) {ans+=pow; pow*=2;}
    ans*=ans;


    printf("%d", ans);

    return (0);
}