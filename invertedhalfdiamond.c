/*Write a program to print “mirrored half diamond star pattern*/ 


#include <stdio.h>
#include<math.h>

int main()
{
    int i,j,row,column;

    printf("Enter number of rows:\n");
    scanf("%d", &row);
    printf("Halfdiamond\n");
    for(i=1;i<=row;i++)
        {
            for(j=1;j<=row+1-i;j++)
             {
                    printf("*");
             }
            printf("\n");
        }
         for(i=1;i<=row;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("*");
                }
            printf("\n");
        }

   
    return 0;
}

