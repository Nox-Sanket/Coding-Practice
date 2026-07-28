
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int i,j,n,p;
    printf("Enter n:");
    scanf("%d",& n);
    if (n<=0)
    {
        return 0;
    }
   lebel:
    while(n>0)
    {
       for(i=1;i<=2*n-1;i++)
        {
            if(i==1 || i == 2*n-1)
                {
                    for(j=1;j<=2*n-1;j++)
                        {
                            printf("%d",n);
                        }
                          
                }else
                {
                 for(j=1;j<=2*n-1;j++)
                {
                    if(j==1 || j == 2*n-1)
                    {
                        printf("%d",n);
                    }else{
                         printf(" ");

                         }
                }
                }
            printf("\n");
            
             
        }
     n=n-1;
    goto lebel;
    
    
    }
    return 0;
}