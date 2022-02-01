#include<stdio.h>
#include<string.h>
void reversestring(char* str)
{
    char *start,*end, ch;
    int len,i;
    len=strlen(str);
    start,end=str;
    //end=str;
    for(i=0;i<len-1;i++)
        end++;
    for(i=0;i<len/2;i++)
    {
        ch=* end;
        *end=*start;
        *start=ch;
        start++;
        end--;
    }
}
int main()
{
    char str[100]=" ";
    printf("enter a string:%s");
    gets(str);
    reversestring(str);
    printf("Reverse the string:%s\n",str);
    return 0;
}
