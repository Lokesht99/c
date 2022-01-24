#include<stdio.h>
int main()
{
int a=10,b=30;
int *p1=&a;
int *p2=&b;
printf("before swap:a=%d,b=%d\n",*p1,*p2);
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
printf("after swap:a=%d,b=%d\n",*p1,*p2);
return 0;

}
