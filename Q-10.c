/*
1234321
123 321
12   21
1     1
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(i==1)
            {
                if(j<4)
                    printf("%d",k++);
                else
                    printf("%d",k--);
            }
            else if((j<=5-i)||(j>=3+i))
            {
                if(j<4)
                    printf("%d",k++);
                else
                    printf("%d",--k);
            }

            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}


