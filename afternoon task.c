#include<stdio.h>
int main(void)
{
FILE *fptr;
int id,age;
int i,s;
char name[200];
char course[200];
char n[200];
char c[200];
fptr=fopen("Student.txt","w");
if(fptr!=NULL)
{
   printf("File creation successful..\n");
}
else{
  printf("File creation failed..\n");
  return -1;
}
printf("Enter student name:");
gets(name);
printf("Enter student course:");
gets(course);
printf("Enter student id:");
scanf("%d",&id);
printf("Enter student age:");
scanf("%d",&age);
fprintf(fptr, "%d %d %s %s",id,age,name,course);
fclose(fptr);
fptr=fopen("student.txt","x");
printf("\nStudent Information:\n");
fscanf(fptr,"%d %d %s %[^\n]s",&i,&s,&n,&c);
printf("Name: %s\n",n);
printf("Course: %s\n",c);
printf("Id: %d\n",i);
printf("Age: %d\n",s);
printf("\nEnd of file\n");
fclose(fptr);
return 0;
}
