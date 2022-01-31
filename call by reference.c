#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
int main(){
  int a, b;
  printf("enter the value for variable a and b\n");
  scanf("%d %d",&a,&b);
  printf("\n\nBefore swapping the value of a and b is \n%d %d",a,b);
  swap(&a,&b);
  printf("\n\nAfter swapping the value a and b is \n%d %d",a,b);
  }
