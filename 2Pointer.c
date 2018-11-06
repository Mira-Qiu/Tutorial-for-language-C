#include <stdio.h>

int main(>
{
  int a;
  int* x;
  
  a = -7;
  x = &a;
  *x = *x + 2;
  printf("The content of variable a is: %d\n",a);
  printf("The content of variable a is: %d\n", *x);
}
/* output:
* The content of variable a is: -5
* The content of variable a is: -5
*/
