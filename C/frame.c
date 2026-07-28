#include <stdio.h>

int main()
{
    int i,j,row;
    
    printf("Enter number of rows:\n");
    scanf("%d", &row);
    for(i=1;i<=row;i++)
        {
            if(i==1)
                {
                    for(j=1;j<=row;j++)
                        {
                            printf("*");
                        }
                        
                }else if(i==row)
                        {
                             for(j=1;j<=row;j++)
                        {
                            printf("*");
                        }
                        }else{
                        for(j=1;j<=row;j++)
                    {
                        if(j==1)
                            {
                                printf("*");
                            }else if(j==row)
                                    {
                                         printf("*");
                                    }else 
                                    {
                                        {
                                    printf(" ");
                                 }
                                    }
                               
                    }
                }
                printf("\n");
                }
            
    return 0;
}