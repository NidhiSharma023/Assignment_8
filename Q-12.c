/*
ABCDCBA
 ABCBA
  ABA
   A
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=4;i++)
    {
        c='A';
        for(j=1;j<=7;j++)
        {
            if((i<=j)&&(j<=8-i))
            {
                if(j<4)
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




