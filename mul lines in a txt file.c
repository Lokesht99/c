#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    int i,n;
    char str[100]; // num of strings
    char fname[100]="test.txt";// creating a new file
    char str1;
    printf("write multiple lines in a text file:\n");
    printf("-------------------------------------------\n");
    printf("Enter the num of lines to be written: ");
    scanf("%d",&n);
    fptr=fopen(fname,"w");// test.txt
    for(i=0;i<n+1;i++)
    {
        fgets(str,sizeof str,stdin); // to get num of strings
        fputs(str,fptr);// write a string
    }
    fclose(fptr);

    fptr=fopen(fname,"r");// read the file
    printf("\n the content of the file %s is :\n",fname);
    str1=fgetc(fptr);// getc its takes ch by ch
    while(str1 != EOF)
    {
        printf("%c",str1);
        str1=fgetc(fptr);
    }
    printf("\n\n");
    return 0;
}
