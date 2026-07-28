/*Let y = f(X) be function such that input, X = {x0,x1,x2} where x0 represents Roll number, x1 represents Name and x2 represents percent marks, let x3 represents number of entries in X and at least 3 roll numbers got percentage makes less than the passing marks, 40. If marks are 38 to 40 then add extra marks 3 to the total. Y prints x3 table entries having columns Roll number, Name. percent marks. Implement C code using appropriate keywords and data types.*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct student{
    int Rollno;
    char Name[50];
    int Percentmarks;
};

int main() {
    int n=5;
    int i=0;
    int fail=0;
    struct student students[5];
        for( i=0;i<n;i++)
    {
        printf("Enter detail of student%d\n",i+1);
        printf("Roll number :");
        scanf("%d",&students[i].Rollno);
        printf("Name:");
        scanf("%s", students[i].Name);
        printf("Percentage mark:");
        scanf("%d",&students[i].Percentmarks);
        if(38<= students[i].Percentmarks<=40)
        {
             students[i].Percentmarks= students[i].Percentmarks+3;
        }
        if( students[i].Percentmarks<38)
        {
            fail++;
        }
        
    }
    printf("\n\nStudent Detail Table\n");
    printf("Rollno.\t   Name\t\tPercentmarks\n");
    printf("------------------------------------\n");
    for(i=0;i<5;i++)
    {
        printf("%d     %s      %d\n",students[i].Rollno, students[i].Name,students[i].Percentmarks);
    }
    
    
    return 0;
}