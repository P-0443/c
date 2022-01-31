#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE* file;
 char path[100];
 char ch;
 int characters,words;
 //Input path of files to merge to third file//
 printf("Enter source file path:");
 scanf("%s",path);
 //open source files in 'r' mode//
 file = fopen(path,"r");
 //check if files opened successfully//
 if(file==NULL)
 {
  printf("\nUnable to open file.\n");
  printf("plese check if file exists and you have raed privilege.\n");
  exit(EXIT_FAILURE);
}
//logic to count characters,words and lines.//
characters = words = 0;
while ((ch = fgetc(file))!=EOF)
{
  characters++;

  //check words//
  if(ch == ' '|| ch == '\t'|| ch == '\n'|| ch == '\0')
   words++;
}
// increment words lines for last word//
if (characters>0)
{   words++;

}
//print file statistics//
printf("\n");
printf("Total characters = %d\n",characters);
printf("Total words = %d\n",words);

// close files to release resources//
fclose(file);
return 0;
}
