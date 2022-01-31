#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[20];
      int id;
      int age;
};
void main()
{
struct student st;
 FILE *fptr;
 fptr=fopen("student details.txt","r");
 if(fptr == NULL)
 {
  printf("error opening:\n");
}
 while(fread(&st,sizeof(struct student),1,fptr))

 printf("name=%s \n id=%d \n age=%d \n",st.name,st.id,st.age);
 // close file
 fclose(fptr);
 }
