#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);

    int r[t];
    for (int i = 0; i < t; i++)
        scanf("%d", &r[i]);

    for (int i = 0; i<t; i++)
    {
        if (r[i] >= 1900)
            printf("Division 1\n");
        else if (r[i] >= 1600 && r[i] <= 1899)
            printf("Division 2\n");
        else if (r[i] >= 1400 && r[i] <= 1599)
            printf("Division 3\n");
        else
            printf("Division 4\n");
    }
}