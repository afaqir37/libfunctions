#include <stdio.h>
int main(void)
{
    int n;
    
    int max1=0;
    int m;
    scanf("%d", &n);
    int p[1][n];
    
    for (int i =0; i < n; i++)
    {
        scanf("%d", &p[1][i]);
    }
    int max = 0;
    
    for (int i =0; i < n; i++)
    {
       
       if(p[1][i] >= max)
       {
            max = p[1][i];
            m = i+1;
            // printf("%d ",  i);
            
          
       }
        i++;
    }
   
  

    for (int i =0; i < n; i++)
    {
    
       if(p[1][i] >= max1 && p[1][i] != max)
       {
            max1 = p[1][i];
       }
        i++;
    }

    printf("%d", m);
    printf(" %d", max1);




}
 