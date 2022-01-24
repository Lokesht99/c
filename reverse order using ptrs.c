#include<stdio.h>
#define n 5
int main()
{
    int a[n],i,*ptr;
    printf("Enter %d int numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ptr=&a[n-1];
    printf("Elements of array in reverse order :");
    for(i=0;i<n;i++)
        printf("%d\n",*ptr--);
    return 0;
}
