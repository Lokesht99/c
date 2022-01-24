#include<stdio.h>
#include<string.h>
int main()
{
    char *s;
    int len,i;
    printf("\nenter a string:");
    gets(s);
    len=strlen(s);
    printf("\nthe reverse string is:");
    for(i=len;i>=0;i--)
        printf("%c",*(s+i));
}
