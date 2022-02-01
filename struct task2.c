#include<stdio.h>
int main(void)
{
    struct student
    {
        char id[10];
        char name[20];
        char branch[20];
    };

    struct staff
    {
        char staffid[10];
        char staffexp[20];
        char staffsal[30];
    };

    struct Nonstaff
    {
        char Nonstaffid[10];
        char Nonstaffdept[20];
        char Nonstaffsal[20];
    };

    struct Admin
    {
        struct student std[3];
        struct staff a[3];
        struct Nonstaff b[3];
    };

    struct Admin ad;

    for(int i=0;i<2;i++)
    {
        printf("\nDetails of student #%d\n",(i+1));
        printf("\nEnter student id\n");
        scanf("%s",ad.std[i].id);
        printf("\nEnter student name\n");
        scanf("%s",ad.std[i].name);
        printf("\nEnter student branch\n");
        scanf("%s",ad.std[i].branch);
        printf("\nEnter staff id\n");
        scanf("%s",ad.a[i].staffid);
        printf("\nEnter staff exp\n");
        scanf("%s",ad.a[i].staffexp);
        printf("\nEnter staff sal\n");
        scanf("%s",ad.a[i].staffsal);
        printf("\nEnter Nonstaff id\n");
        scanf("%s",ad.b[i].Nonstaffid);
        printf("\nEnter Nonstaff dept\n");
        scanf("%s",ad.b[i].Nonstaffdept);
        printf("\nEnter Nonstaff sal\n");
        scanf("%s",ad.b[i].Nonstaffsal);
    }

    printf("\nResult via Admin\n");
    for(int i=0;i<2;i++)
    {
        printf("\nDeatil of student #%d\n",(i+1));
        printf("id: %s\n",ad.std[i].id);
        printf("name: %s\n",ad.std[i].name);
        printf("branch: %s\n",ad.std[i].branch);
        printf("staffid: %s\n",ad.a[i].staffid);
        printf("staffexp: %s\n",ad.a[i].staffexp);
        printf("staffsal: %s\n",ad.a[i].staffsal);
        printf("Nonstaffid: %s\n",ad.b[i].Nonstaffid);
        printf("Nonstaffid: %s\n",ad.b[i].Nonstaffid);
        printf("Nonstaffdept: %s\n",ad.b[i].Nonstaffdept);
        printf("Nonstaffsal: %s\n",ad.b[i].Nonstaffsal);

    }
    return 0;
}
