#include <stdio.h>

int main()
{
    int i,j,row,k=1;
    printf("enter the number of row:");
    scanf("%d",&row);
    printf("pattern are:\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf("*");

        }
        printf("\n");
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
}
