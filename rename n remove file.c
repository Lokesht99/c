#include<stdio.h>
void main()
{
    int successful=0;
    successful=rename("username.txt","username1.txt");
    if(successful !=0)
        printf("\n the fie is not renamed");
}

