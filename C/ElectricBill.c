/*Write a program to calculate the electricity bill for the given MODULEs.*/

#include  <stdio.h>

int main()
{
    int unit;
    float bill;
    printf("Enter the units consumed in \nthat month: ");
    scanf("%d", &unit);
    printf("Electric bill for that month is:\n");
    if(unit==0)
    {
        printf("120");
    }else if(0<unit<101)
        {
            bill=unit*4.29+120;
            printf("%.3lf", bill);
        }else if(100<unit<301)
            {
                bill=120+100*4.29+(unit-100)*7.34;
                printf("%.3lf", bill);
            }else if(300<unit<501)
                {
                    bill=120+100*4.29+200*7.34+(unit-300)*10.28;
                    printf("%.3lf", bill);
                }else if(500<unit)
                    {
                        bill=120+100*4.29+200*7.34+200*10.28+(unit-500)*11.83;
                        printf("%.3lf", bill);
                    }else
                        {
                            printf("Error");
                        }
    return 0;
}