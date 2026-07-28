#include <stdio.h>

int main ()
{
    float ang1,ang2,ang3;
    float sum;
    printf("Enter the angle of triangle:\n");
    scanf("%f%f%f", &ang1, &ang2, &ang3);
    sum=ang1+ang2+ang3;

    if(sum==180)
    {
        printf("Triangle is valid");
    }else
        {
            printf("Triangle is not valid");
        }
    return 0;
}

