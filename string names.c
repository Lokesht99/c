#include<stdio.h>
#include<string.h>
int main()
{
char str[20][20],s1[40];
int n,i,found=0;
printf("Enter how many string(names):");
scanf("%d",&n);
printf("enter %d strings:\n",n);
for(i=0;i<n;i++)
{
scanf("%s",str[i]);
}
printf("enter a string to search:");
scanf("%s",s1);
for(i=0;i<n;i++)
{
if(strcmp(s1,str[i])==0){
found=1;
printf("found in row-%d\n",i+1);
}
}
if(found==0)
printf("not found");
return 0;
}
