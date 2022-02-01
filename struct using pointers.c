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

    struct Admin *ptr=NULL;
    struct Admin b[3];
    ptr=b;

    for(int i=0;i<2;i++)
    {
        printf("Details of student #%d\n",(i+1));
        printf("Enter student id\n");
        scanf("%s",ptr->std[i].id);
        printf("Enter student name\n");
        scanf("%s",ptr->std[i].name);
        printf("Enter student branch\n");
        scanf("%s",ptr->std[i].branch);
        printf("Enter staff id\n");
        scanf("%s",ptr->a[i].staffid);
        printf("Enter staff exp\n");
        scanf("%s",ptr->a[i].staffexp);
        printf("Enter staff sal\n");
        scanf("%s",ptr->a[i].staffsal);
        printf("Enter Nonstaff id\n");
        scanf("%s",ptr->b[i].Nonstaffid);
        printf("Enter Nonstaff dept\n");
        scanf("%s",ptr->b[i].Nonstaffdept);
        printf("Enter Nonstaff sal\n");
        scanf("%s",ptr->b[i].Nonstaffsal);
        ptr++;

    }
    ptr=b;
    printf("\nResult via Admin\n");
    for(int i=0;i<2;i++)
    {
        printf("\nDeatil of student #%d\n",(i+1));
        printf("id: %s\n",ptr->std[i].id);
        printf("name: %s\n",ptr->std[i].name);
        printf("branch: %s\n",ptr->std[i].branch);
        printf("staffid: %s\n",ptr->a[i].staffid);
        printf("staffexp: %s\n",ptr->a[i].staffexp);
        printf("staffsal: %s\n",ptr->a[i].staffsal);
        printf("Nonstaffid: %s\n",ptr->b[i].Nonstaffid);
        printf("Nonstaffid: %s\n",ptr->b[i].Nonstaffid);
        printf("Nonstaffdept: %s\n",ptr->b[i].Nonstaffdept);
        printf("Nonstaffsal: %s\n",ptr->b[i].Nonstaffsal);
        ptr++;

    }
    return 0;
}
