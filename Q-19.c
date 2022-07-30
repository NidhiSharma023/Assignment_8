/*
  *****     *****
 *******   *******
********* *********
******MySirG*******
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(i<=3)
            {
                if(((j>=4-i)&& (j<=6+i))|| ((j>=14-i)&&(j<=16+i)))
                    printf("*");
                else
                    printf(" ");
            }
            if(i>=4)
            {
                if(i==4 && j==7)
                    printf("MySirG");
                if((i==4)&& (j>=7)&& (j<=12))
                    continue;
                if((i-3<=j)&& (23-i>=j))
                    printf("*");
                else
                    printf(" ");

            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
