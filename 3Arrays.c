#include<stdio.h>
#include<stdlib.h>

void display(int x[])
{
  int k;
  for( k = 0; k < 5; k++)
    printf("%d",x[k]);
   printf("\n");
}

int main()
{
  int *a;
  int i;
  a = (int*)malloc(5*sizeof(int));
  //allocatie space in heap for the array;
  for( i = 0; i < 5; i++)
    a[i] =i*i;
  display(a);
  return 0;
 }
