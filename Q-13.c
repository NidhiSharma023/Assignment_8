/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char c;
    for(i=1;i<=7;i++)
    {
        c='A';
        for(j=1;j<=13;j++)
        {
            if(i==1)
            {
                if(j<7)
                    printf("%c",c++);
                else
                    printf("%c",c--);
            }
            else if((j<=8-i)||(j>=6+i))
            {
                if(j<7)
                    printf("%c",c++);
                else
                    printf("%c",--c);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}




