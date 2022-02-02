#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct students
{
char name[25];
int age;
};
struct course
{
char name[25];
int id;
};
struct admin
{
struct students std[2];
struct course co[2];
};
void studentdetails()
{
struct students s[20];
struct admin ad;

FILE *fptr;
char name[25];
int age;
int i=0;
fptr=fopen("student details.txt","r");
if(fptr==NULL)
{
printf("error opening file\n");
exit(1);
}
while(fscanf(fptr,"%s %d\n",name,&age)!=EOF)
{
strcpy(ad.std[i].name,name);
ad.std[i].age=age;
i++;
}
printf("i=%d\n",i);
for(int j=0;j<i;j++)
{
printf("%s \n",ad.std[j].name);
printf("%d \n",ad.std[j].age);
printf("\n");
}
fclose(fptr);
}
void coursedetails()
{
struct course c[20];
struct admin ad;
FILE *fptr;
char name[25];
int id;
int i=0;
fptr=fopen("course details.txt","r");
if(fptr==NULL)
{
printf("error opening file\n");
exit(1);
}
while(fscanf(fptr,"%s %d\n",name,&id)!=EOF)
{
strcpy(ad.co[i].name,name);
ad.co[i].id=id;
i++;
}
for(int j=0;j<i;j++)
{
printf("%s \n",ad.co[j].name);
printf("%d \n",ad.co[j].id);
printf("\n");
}
fclose(fptr);
}
int main()
{
studentdetails();
coursedetails();
return 0;
}


