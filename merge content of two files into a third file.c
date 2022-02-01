#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr1,*fptr2,*fptr3;
    char c;
    // open two files to be merged
    fptr1=fopen("filee1.txt","r");
    fptr2=fopen("filee2.txt","r");
    fptr3=fopen("filee3.txt","w");// to store the result
    if(fptr1== NULL || fptr2==NULL || fptr3==NULL)
    {
        puts("could not open files");
        exit(0);
    }
    while((c=fgetc(fptr1))!=EOF) // copy content of 1st file to 3rd file.
        fputc(c,fptr3);
    while((c=fgetc(fptr2))!=EOF)// copy content of 2nd file to 3rd file.
        fputc(c,fptr3);
    printf("Merged filee1.txt and filee2.txt into the filee3.txt");
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;

}
