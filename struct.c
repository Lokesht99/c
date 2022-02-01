#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fptr;
    char ch;
    fptr=fopen("username1.txt","w");
    printf("Enter your detailes:\n");
    while((ch=getchar())!='\n')
    {
        putc(ch,fptr);
    }
    fclose(fptr);
    fopen("username1.txt","r");
    printf("\n File content:\n\n");
    while((ch=getc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n End of username1 file \n\n");
    fclose(fptr);
    printf("Copying a text from one file to another file\n");
    printf("------------------------------------------\n");
    {
        int ch;
        FILE *fp,*fq;
        fp=fopen("username1.txt","r");
        fq=fopen("program.txt","w");
        if(fp==NULL || fq==NULL)
            printf("File does not exist..");
        else
            while((ch=fgetc(fp))!=EOF)
        {
            fputc(ch,fq);
        }
        {
            FILE *fp1,*fp2;
            char fname1[50],fname2[50],c;
            printf("Enter filename to open for reading: ");
            scanf("%s",fname1);
            fp1=fopen(fname1,"r");
            if(fp1==NULL)
            {
                printf("%s file does not exist..", fname1);
                exit(0);
            }
            printf("\nEnter filename to append the content: ");
            scanf("%s", fname2);
            fp2=fopen(fname2,"a");
            if(fp2==NULL)
            {
                printf("%s file does not exist... ", fname2);
            }
            c=fgetc(fp1);
            while(c !=EOF)
            {
                fputc(c,fp2);
                c=fgetc(fp1);
            }
            printf("\nContent in %s appended to %s", fname1,fname2);
            fclose(fp1);
            fclose(fp2);
        }
        return 0;

    }
}
