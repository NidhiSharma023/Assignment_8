/*
    *
   * *
  *   *
 *     *
*********
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((i==5)||(j==4+i)||(j==6-i))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}


