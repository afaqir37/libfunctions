#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    int p = 0;
    int q = 0;
    int k = 0;
    int l =0;

    char r[t][102];
    for (int i = 0; i<t; i++)
    {
        scanf("\n");
        scanf("%[^\n]s",r[i]);
    }
   
    
   for (int i = 0; i<t; i++)
   {
        int j = 0;
        while (r[i][j] && r[i][j] != 32)
        {
        
                if (r[i][j] == 'X')
                    a++;
                else if (r[i][j] == 'L')
                    b++;
                else if (r[i][j] == 'M')
                    c++;
                else if (r[i][j] == 'S')
                    d++;
               j++;
        }

        
            j++;
            while ( r[i][j] && (r[i][j] == 'X' || r[i][j] == 'L' || r[i][j] == 'M' || r[i][j] == 'S'))
            {
                if (r[i][j] == 'X')
                    p++;
                else if (r[i][j] == 'L')
                    q++;
                else if (r[i][j] == 'M')
                    k++;
                else if (r[i][j] == 'S')
                    l++;
                j++;
            }


            if (b && !q)
                printf("\n>");
            else if(!b && q)
                printf("\n<");
            else if (b && q && a > p)
                printf("\n>");
            else if (b && q && a < p)
                printf("\n<");
            else if (!c && k)
                printf("\n<");
            else if (c && k && a < p)
                printf("\n<");
            else if (c && k && a > p)
                printf("\n>");
            else if (d && l && a > p)
                printf("\n<");
            else if (!c && k)
                printf("\n>");
            else if ((a = p) && ( b || c ||d || q || a || l))
                printf("\n=");
            
            
                
                
                


        
   }
}