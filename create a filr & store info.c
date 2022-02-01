#include <stdio.h>
#include <stdlib.h>
struct employeeDetailes
{
int Id;
int salary;
char Name[30];
char destination[30];
}s[10];
int main()
{
int n;
struct employeeDetailes emp;
FILE *fptr;
if ((fptr = fopen("EmployeeDetailes.txt","w")) == NULL){
printf("Error! opening file");
// Program exits if the file pointer returns NULL.
exit(1);
}
printf("Enter a employee detailes:\n");
for(n = 0; n < 2; ++n)
{
    s[n].Id=n+1;
printf("\nEmployeeName::");
scanf("%s",&emp.Name);
printf("\nEmployeeId::");
scanf("%d",&emp.Id);
printf("\nEmployeeSalary::");
scanf("%d",&emp.salary);
printf("\nDestination::");
scanf("%s",&emp.destination);
{
fwrite(&emp, sizeof(struct employeeDetailes),1, fptr);
}
fclose(fptr);
}
printf("Employee Detailes are:\n");
fptr = fopen("D:\\EmployeeDetailes.txt","a");
for(n = 0; n < 2; ++n)
{
fread(&emp, sizeof(struct employeeDetailes), 1, fptr);
printf("Name: %s\nId: %d\nsalary: %d\ndestination:%s\n", emp.Name, emp.Id, emp.salary,emp.destination);
}
fclose(fptr);
return 0;
}
