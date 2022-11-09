#include <stdio.h>
#include <string.h>
int main(void)
{
    char p[101];
    scanf("%s", p);

    int i = 0; 
    int counter1 = 0;
    int counter2 = 0;
   
    while (p[i])
    {
        if (p[i] >= 'a' && p[i] <= 'z')
            counter1++;
        else if (p[i] >= 'A' && p[i] <= 'Z')
            counter2++;
        i++;
    }
    i = 0;
    if (counter1 >= counter2)
    {
        while (p[i])
        {
            if (p[i] >= 'A' && p[i] <= 'Z')
                p[i] += 32;
            
            i++;
        }
    }
    else
    {
        while (p[i])
        {
            if (p[i] >= 'a' && p[i] <= 'z')
                 p[i] -= 32;
            i++;
        }
    }
    printf("%s", p);
}