#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Entered number is even:");
    }else
        {
            printf("Entered number is odd.");
        }
return 0;
}
