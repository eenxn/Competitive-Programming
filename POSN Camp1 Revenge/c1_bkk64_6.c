#include <stdio.h>

int main()
{
    char n[13]; scanf("%s", n);
    
    int sum1 = 0, sum2 = 0;
    for(int i =11; i>=0; i--)
    {
        if(i%2 == 1) sum1 += 3*((int)n[i]-48);
        if(i%2 == 0) sum2 += (int)n[i]-48;
    }

    if((sum1+sum2+((int)n[12]-48))%10 == 0) 
    {
        printf("YES\n");
        return (0);
    }
    printf("NO\n");

    return (0);
}