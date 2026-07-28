 //*Write a Program to convert Fahrenheit to Celsius.*//  
 #include <stdio.h>

int main()
{
    float Fah,Cel;
    printf("Enter the fahrenheit tempereture:\n");
    scanf("%f", &Fah);
    Cel=(Fah-32)*5/9;
    printf("Tempereture in Celsius:%f\n", Cel);
    return 0;
}

