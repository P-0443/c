#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const char*PeronFormatIn="%[^,],%d,%c";
const char*PersonFormatOut="%s,%d,%c\n";
typedef struct person
{
char name[25];
int age;
char gender;
}
person;

void main()
{
person p1={.name="Malli",.age=24,.gender='M'};
FILE*file;
fopen_s(&file,"file.txt","w+");
if(file==NULL)
{
return 1;
}
fprintf_s(file,'person Format Out,p1.name,p1.age,p1.gender');
fseek(file,0,SEEK_SET);
sscanf_s(file,'Person Format In,p1.name,&p1.age,&p1.gender');
}
