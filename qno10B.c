#include<stdio.h>
int main()
{
 int i,j,rows=5,k,m=1;

printf("\n");
for(i=rows;i>=1;i--)
    {
        for(j=1;j<=m;j++)
        {
            printf(" ");
        }

    for(k=1;k<=(2*i-1);k++)
        {
        printf("N");
        }
        m++;
        printf("\n");
    }

}