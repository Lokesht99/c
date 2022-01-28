#include<stdio.h>
int main(void)
{
    struct employee
    {
        char id[30];
        char firstname[30];
        char lastname[30];

        struct department
        {
           char deptid[15];
           char deptname[20];
           char deptsal[20];
        }a;

        struct division
        {
            char divexperience[20];
            char divrole[20];
        }b;
    };
    struct employee emp;
    printf("Enter employee details:\n");
    printf("enter emp id :");
    gets(emp.id);
    printf("enter emp firstname :");
    gets(emp.firstname);
    printf("enter emp lastname :");
    gets(emp.lastname);
    printf("enter dept id :");
    gets(emp.a.deptid);
    printf("enter dept name:");
    gets(emp.a.deptname);
    printf("enter dept sal:");
    gets(emp.a.deptsal);
    printf("enter divexperience:");
    gets(emp.b.divexperience);
    printf("enter divrole:");
    gets(emp.b.divrole);

    printf("\nEmployee details:\n");
    printf("id: %s\n",emp.id);
    printf("firstname: %s\n",emp.firstname);
    printf("lastname: %s\n",emp.lastname);

    printf("\nDepartment details:\n");
    printf("%s\n",emp.a.deptid);
    printf("%s\n",emp.a.deptname);
    printf("%s\n",emp.a.deptsal);

    printf("\nDivision details:\n");
    printf("%s\n",emp.b.divexperience);
    printf("%s\n",emp.b.divrole);

    return 0;
}
