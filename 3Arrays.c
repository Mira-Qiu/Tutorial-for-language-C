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
  int *a;  //The location  of a is in the stack, but the location of array are in heap.
  int i;
  a = (int*)malloc(5*sizeof(int));
  //allocate space in heap for the array;
  for( i = 0; i < 5; i++)
    a[i] =i*i;
  display(a);
  return 0;
 }


/* The declaration int* a inform the C compilar that the content of the variable a can point to an integer's location.
*  a = (int*)malloc(5*sizeof(int)); does two things:
* 1.build-in function "malloc" which stands for memory allocation, is defined in the header file "stdlib.h", This function allocaties space in the heap.
* 2. The function returns the address of the first of the five consecutive locations that are in heap.
* The address would be the content of a.
*/
