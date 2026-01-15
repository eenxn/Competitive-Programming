#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int q; scanf("%d", &q);

    for(int i=1; i<=q; i++)
    {
        char word[1005]; fgets(word, 1005, stdin);

        for (int j=0; j<strlen(word); j++)
        {
            if(word[j] == ' ') 
            {
                printf(" ");
                continue;
            }
            int a = (word[i]-'a'+1)/3;
            int n = (word[i]-'a'+1)%3;

            printf("Case #%d: ", i);
            for(int k=1; k<=n; k++)
            {
                printf("%d", a);
            }
            
        }
        printf("\n");
    }
}