#include <stdio.h>
#include <stdlib.h>

int swap1(int x, int y)
    {
        int temp =x;
        x=y;
        y=temp;
        printf("Value after swapping (call by value inside fuction): x=%d y=%d\n",x,y);
    };
    
int swap2(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
        printf("Value after swapping (call by reference inside fuction): x=%d y=%d\n",*x,*y);
    };
    
int main()
{

    int a,b;
    printf("Enter two number :\n");
    scanf("%d%d",&a,&b);
    printf("\nvalue before swaping: x=%d y=%d\n",a,b);
    swap1(10,20);
    printf("Value after swapping (call by value outside fuction): x=%d y=%d\n",a,b);
    swap2(&a,&b);
    printf("Value after swapping (call by reference outside fuction): x=%d y=%d\n",a,b);
    return 0;
}