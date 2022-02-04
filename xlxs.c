#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *ptr=fopen("Book.xlsx","r");
if (ptr==NULL)
{
printf("Error to open file...");
exit(1);
}
char line[200];
while(fgets(line,sizeof(line),ptr))
{
char *token;
token=strtok(line,",");
while(token!=NULL)
{
printf("%-12s",token);
token=strtok(NULL,",");
}
printf("\n");
}
return 0;
}
