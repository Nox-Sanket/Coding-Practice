//* Program to find simple and compound intrest*//
#include <stdio.h>
int main()
{
    float SI,CI,R,T;
    int P;
    printf("Enter the principal amount:\n");
    scanf("%d", &P);
    printf("Enter the rate:\n");
    scanf("%d", &R);
    printf("Enter the time period in year:\n");
    scanf("%d", &T);
    SI= (P*R*T)/100;
    ;
    printf("Simple intrest on the given amount is:/n%d",SI);
    printf("Compound intrest on the given amount is:/n%d",CI);
return 0;
}