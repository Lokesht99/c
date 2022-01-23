#include<stdio.h>
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main()
{
int a,b;
printf("\nEnter value of a & b:");
scanf("%d %d",&a,&b);
printf("Before swapping:\n");
printf("\na=%d,\n\nb=%d\n",a,b);
swap(&a,&b);
printf("After swapping:\n");
printf("\na=%d\n\nb=%d",a,b);
return 0;

}
