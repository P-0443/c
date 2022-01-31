#include<stdio.h>
#include<stdlib.h>
void main()
{
 FILE *file1, *file2, *fnew;
 char ch, fname1[20], fname2[20],fname3[30];
 printf("\n\n Merge two files and write it in anew file:\n");
 printf("--------------------------------------------\n");
 printf("Input the 1st file name:");
 scanf("%s",fname1);
 printf("Input the 2nd file name:");
 scanf("%s",fname2);
 printf("Input the new file name where to merge the above two files:");
 scanf("%s",fname3);
 file1=fopen(fname1,"r");
 file2=fopen(fname2,"r");
 if(file1==NULL||file2==NULL);
 {
 // perror("Error message");
 printf("File does not exist or error in opening..!!\n");
 exit(EXIT_FAILURE);
 }
 fnew=fopen(fname3,"w");
 if(fnew==NULL)
 {
 //perror("Error message");
  printf("File does not exist or error in opening....!!\n");
  exit(EXIT_FAILURE);
}
while((ch=fgetc(file1))!=EOF)
{
 fputc(ch,fnew);
 }
 printf("The two files merged into %s file successfully..!!\n\n",fname3);
 fclose(file1);
 fclose(file2);
 fclose(fnew);
 }
