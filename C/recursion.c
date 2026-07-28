#include <stdio.h>
#include <stdlib.h>

int factorial(int n);//fuction prototype

int main() {
    int n;
    printf("Enter the value on n:");
    scanf("%d",&n);
    int result=factorial(n);  //fuction call
    printf("The factorial of %d is : %d",n,result);
    return 0;
}
int factorial(int n){         //fuction defination 
    if(n==0 || n==1)
    {
        return 1;
    }else{
        return n*factorial(n-1); //recursion
    }
    
}