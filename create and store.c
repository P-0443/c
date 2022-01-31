#include<stdio.h>
#include<stdlib.h>
struct employeeDetails
{
int Id;
int salary;
char name[30];
char destination[30];
};
int main()
{
 int n;
 struct employeeDetails emp;
 FILE *fptr;
 if((fptr = fopen("EmployeeDetails.txt","w"))==NULL){
  printf("Error opening file");
  //programe exist if the file pointer returns NULL.
  exit(1);
  }
  printf("Enter a employee detailes:\n");
  for(n = 1; n < 3; ++n)
  {
  printf("\nEmployeeName::");
  scanf("%s",&emp,'name');
  printf("\nEmployeeId::");
  scanf("%d",&emp,'Id');
  printf("\nEmployeeSalary::");
  scanf("%d",&emp.salary);
  printf("\nDestination::");
  scanf("%s",&emp.destination);
  {
  fwrite(&emp,'sizeof(struct employeeDetailes)',1,fptr);
  }
  fclose(fptr);
  }
  printf("Employee Detailes are:\n");
  fptr = fopen("D:\\EmployeeDetailes.txt","a");
  for(n=1;n<3;++n)
  {
  fread(&emp,'sizeof(struct employeeDetailes)',1,fptr);
  printf("Name:%s\nId: %d\nSalary: %d\nDestination:%s\n",emp.name,emp.Id,emp.salary,emp.destination);
  }
  }
