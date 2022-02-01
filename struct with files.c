#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    struct college
    {
        char colname[100];
        char address[100];
    }col;
    struct faculty
    {
        char facname[100];
        char facid[100];
    }b;
    struct admin
    {
      struct college col[2];
      struct faculty   b[2];
    };
    FILE *fptr;
    struct admin ad ;
    fptr=fopen("college.txt","r");
    if(fptr== NULL)
    {
        printf(stderr, "\nError opening college.txt\n\n");
        exit(1);
    }
    int i=0;
    for(int i=0;i<4;i++){
    fscanf(fptr, "%s %s %s %s\n",&ad.col[i].colname,&ad.col[i].address,&ad.b[i].facname,&ad.b[i].facid);
    printf("\n%s ", ad.col[i].colname);
    printf("\n%s ", ad.col[i].address);
    printf("\n%s ", ad.b[i].facname);
    printf("\n%s ", ad.b[i].facid);
    printf("\n");
    }
    while(fread(&ad, sizeof(struct admin),1,fptr))
    {
        fprintf(" college name= %c\n address= %c\n fac name= %c\n fac id= %c\n",ad.col[i].colname,ad.col[i].address,ad.b[i].facname,ad.b[i].facid);
    }
    fclose(fptr);
}
