/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=5;i++)
    {
        c='A';
        for(j=1;j<=9;j++)
        {
            if((j<=4+i)&&(j>=6-i))
            {
                if(j<5)
                    printf("%c",c++);
                else
                    printf("%c",c--);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}



