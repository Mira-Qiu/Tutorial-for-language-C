#include <stdio.h>

int x,y;
void swap(int a, int b);

int main()
{
  x = 2;
  y = 3;
  
  printf("The content of variable x and y before swap\n");
  printf("x = %d, y = %d\n", x, y);
  
  swap(&x,&y);
  
  printf("The content of variable x and y after swap\n");
  printf("x = %d, y = %d\n", x, y);
  return 0;
 }
 
 void swap(int *a, int *b)
 {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
 }
 
 /*
 * a & b accept address. The call passes the address of x into a and the address of y into b
 * *b = temp means insert the value of temp and insert this number in the location that b is dereferenced to it.
 */

#include <stdio.h>
int x, y;
void swap(int a, int b);
int main()
{
  x = 2;
  y = 3;
  printf("The content of variable x and y before swap\n");
  printf("x = %d, y = %d\n", x, y);
  swap(x, y);
  printf("The content of variable x and y after swap\n");
  printf("x = %d, y = %d\n", x, y);
  return 0;
}

void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

/* The output is:
* The content of variable x and y before swap
* x = 2, y = 3
* The content of variable x and y after swap
* x = 2, y = 3
* 
* /
  

  
