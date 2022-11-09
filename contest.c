#include <stdio.h>




int main(void)
{
    int n;
    int m = 0;
    
    

    scanf("%d", &n);
    

    char p[n][4];
    for (int i = 0; i < n; i++)
    {
       scanf("%s", p[i]);
    }
    // for (int i = 0; i <n ; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         printf("%s\n", &p[i][j]);
    // }

    for(int i = 0; i < n ; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {
            if ( p[i][j] == '-')
            {
                m--;
                break;
            }
            else if ( p[i][j] == '+')
            {
                m++;
                break;
            }
            else
                continue;
        }
    }
    printf("%d", m);

   

}