#include <stdio.h>
#include <math.h>
int main()
{
    int ch;
    float a,b,c;
    printf("Enter the first number:\n");
    scanf("%f", &a);
    printf("Enter the second number:\n");
    scanf("%f", &b);
    printf("1.Addition\n2.Substaction\n3.Multiplication\n4.division\n5.Exit\n");
    printf("Enter the number of opretion that has to be perform:\n");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1:
         printf("Sum of entered number is:\n");
         c=a+b;
         printf("%f", c);
         break;

        case 2:
          printf("Subtraction of entered number is:\n");
          c=a-b;
          printf("%f", c);
          break;

        case 3:
         printf("Multiplication of entered number:\n");
         c=a*b;
         printf("%f", c);
         break;

        case 4:
        if(b==0)
        {
            printf("Division by zero not possible\nInfinite");
        }else
        { 
            printf("Division of entered number is:\n");
            c=a/b;
            printf("%f", c);
        }
         break;

        default :
         printf("Exit");
         break; 
        
    }
    return 0;
    
}

