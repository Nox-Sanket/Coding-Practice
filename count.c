/*Write a program to accept a suitable input from the user and count blanks, tabs and newlines.*/

#include <stdio.h>
int main()
{
    char ch;
    int blanks,newline,tabs;
    blanks=0;
    newline=0;
    tabs=0;
    printf("Enter text (press Ctrl+D to end input on Unix/Linux or Ctrl+Z on Windows:\n");
    scanf("%c", &ch);
    while ((ch = getchar()) != EOF)
    {
        if(ch ==' ')
        {
            blanks++;
        }else if(ch =='\n')
                {
                    newline++;
                }else if(ch =='\t')
                        {
                            tabs++;
                        }
    }
    
    printf("Number of blanks:%d", blanks);
    printf("Number of newline:%d", blanks);
    printf("Number of tabs:%d", blanks);
    return 0;
    
}