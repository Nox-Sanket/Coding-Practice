#include <stdio.h>
#include <math.h>

int main()
{
    int arr[10][5];
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
            {
                if(j==0)
                {
                    printf("2");
                }else if(j==1)
                    {
                        printf("X");
                    }else if(j==2)
                        {
                            printf("%d",i+1);
                        }else if(j==3)
                            {
                                printf("=");
                            }else{
                                    printf("%d", 2*(i+1));
                                    printf("\n");
                                 }
            }
    }
    return 0;
}