#include <stdio.h>
int main(void)
{
    int k;
    int n;
    int w;
    int result;
    scanf("%d", &k);
    scanf("%d", &n);
    scanf("%d", &w);
    result = 0;
    for (int i = 1; i <= w; i++)
    {
            result += k*i;
    }

    if (result <= n )
        {
            printf("0");
        }
    else
        printf("%d", result - n);

}