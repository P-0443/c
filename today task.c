#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
int id;
char name[100];
char address[100];
};

struct dept
{
char id[100];
char name[100];
int students;
};

struct Admin
{
struct student s[5];
struct dept d[5];
};

void studentdetails(struct Admin *ptr)
{
FILE *fptr;
// int id;
// char name[100];
// char address[100];
// int i=0;
fptr=fopen("student1.txt","r");
if (fptr == NULL)
{
printf("\nError opening File\n\n");
exit (1);
}
for(int i=0;i<2;i++)
{
fscanf(fptr, "%d %s %s\n", &ptr->s[i].id,ptr->s[i].name,ptr->s[i].address);

 }

// while(fscanf(fptr, "%d %s %s\n", &id,name,address)!=EOF)
// {
// printf("%d %s %s\n",id,name,address);
// ptr->s[i].id=id;
// strcpy(ptr->s[i].name,name);//c[i].name=c[i].name;
// strcpy(ptr->s[i].address,address);
// i++;
// }
//printf("i=%d\n",i);
printf("\n====================================\n\tstudent details\n====================================\n");
printf("ID\tName\t\tAddress\n");
printf("************************************\n");
for(int j=0;j<2;j++)
{
printf("%d\t",ptr->s[j].id);
printf("%s\t\t",ptr->s[j].name);
printf("%s\t",ptr->s[j].address);
printf("\n\n");
}

//printf("outside while");
// while(fread(&c, sizeof(struct college), 1, fptr))
// {
// printf("inside while");
// printf ("id = %d name = %s address=%s\n",c.id, c.name, c.address);
// }

fclose(fptr);
}
void deptdetails(struct Admin *ptr)
{
//struct dept d[15];
FILE *fptr;
// char id[100];
// char name[100];
// int students;
// int i=0;
fptr=fopen("dept.txt","r");
if (fptr == NULL)
{
printf("\nError opening File\n\n");
exit (1);
}

 for(int i=0;i<2;i++)
{
fscanf(fptr, "%s %s %d\n", ptr->d[i].id,ptr->d[i].name,&ptr->d[i].students);
}
// while(fscanf(fptr, "%s %s %d\n", &ptr->d[i].id,ptr->d[i].name,&students)!=EOF)
// {
//// printf("%s %s %d\n",id,name,students);
// strcpy(ptr->d[i].id,id);
// strcpy(ptr->d[i].name,name);//c[i].name=c[i].name;
// ptr->d[i].students=students;
// i++;
// }
printf("\n====================================\n\tdepartment details\n====================================\n");
printf("ID\tName\tNo.Students\n");
printf("************************************\n");
for(int j=0;j<2;j++)
{
printf("%s\t",ptr->d[j].id);
printf("%s\t",ptr->d[j].name);
printf("%d ",ptr->d[j].students);
printf("\n\n");
}
fclose(fptr);
}
void search(struct Admin *ptr)
{
int id;
printf("enter the id for searching: ");
scanf("%d",&id);
for(int i=0;i<2;i++)
{
if(ptr->s[i].id==id)
{
printf("record found\n");
printf("%d ",ptr->s[i].id);
printf("%s ",ptr->s[i].name);
printf("%s ",ptr->s[i].address);
printf("\n");
return;
}
}
printf("record not found");
}
void update(struct Admin *ptr)
{
int id;
char name1[255];
printf("enter the id for searching: ");
scanf("%d",&id);
for(int i=0;i<2;i++)
{
if(ptr->s[i].id==id)
{
printf("record found\n");
printf("enter the name to update: \n");
scanf("%s",&name1);
strcpy(ptr->s[i].name,name1);
printf("details after update: ");
printf("%d ",ptr->s[i].id);
printf("%s ",ptr->s[i].name);
printf("%s ",ptr->s[i].address);
printf("\n");
return;
}
}
printf("record not found");
}

void writefile(struct Admin *ptr)
{
FILE *fptr;
int i=0;
fptr=fopen("studentdept.txt","w");
if (fptr == NULL)
{
printf("\nError opening File\n\n");
exit (1);
}
for(int i=0;i<2;i++)
{
fprintf(fptr, "%d %s %s\n", ptr->s[i].id,&ptr->s[i].name,&ptr->s[i].address);
}

 for(int i=0;i<2;i++)
{
fprintf(fptr, "%s %s %d\n", &ptr->d[i].id,&ptr->d[i].name,ptr->d[i].students);
}

fclose(fptr);
}

void main()
{
struct Admin a;
struct Admin *ptr=NULL;
ptr=&a;
studentdetails(ptr);
deptdetails(ptr);
//search(ptr);
//update(ptr);
writefile(ptr);
}
