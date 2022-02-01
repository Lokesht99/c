#include<stdio.h>
#define N 5
int main()
{
    int a[N],b[N],i;
    printf("Enter %d integer number\n",N);
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\ncopying elements of array a to b\n");
    for(i=0;i<N;i++)
        b[i]=a[i];
    printf("\nOriginal(a[5])--> copy(b[5])\n",N,N);
    for(i=0;i<N;i++)
        printf("%d-->%d\n",a[i],b[i]);
    return 0;
}
