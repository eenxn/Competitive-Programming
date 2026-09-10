#include <stdio.h>

int main()
{
    int q; scanf("%d", &q);
    
    while (q--)
    {
        char name[31], ps[11], birth[11];
        int course;

        scanf("%s%s%s%d", name, ps, birth, &course);

        int year_postsec = (((int)ps[0]-('0'))*1000)+(((int)ps[1]-('0'))*100)+(((int)ps[2]-('0'))*10)+(((int)ps[3]-('0')));
        int year_birth = (((int)birth[0]-('0'))*1000)+(((int)birth[1]-('0'))*100)+(((int)birth[2]-('0'))*10)+(((int)birth[3]-('0')));

        if(year_postsec >= 2010 || year_birth >= 1991)
        {
            printf("%s eligible\n", name);
        }
        else if(course>40)
        {
            printf("%s ineligible\n", name);
        }
        else
        {
            printf("%s coach petitions\n", name);
        }
        
    }

    return (0);
}