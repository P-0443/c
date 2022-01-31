#include<stdio.h>
#include<string.h>
void reverseString(char* str)
{
   int l, i;
  char *begin, *ending, ch;
  l = strlen(str);
  begin = str;
  ending = str;
  for(i = 0; i<1-1;i++)
     ending++;
  for (i = 0; i< 1/2; i++)
  {
   ch = *ending;
   *ending = *begin;
   *begin = ch;
   begin++;
   ending--;
  }
}
int main()
{
 char str[100] =" ";
 printf("Enter a string: %s\n");
 gets(str);
 reverseString(str);
 printf("Reverse of the string: %s\n",str);
 return 0;
 }
