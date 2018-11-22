#include <stdio.h>

int main(>
{
  int a;
  int* x;
  
  a = -7;
  x = &a;
  *x = *x + 2;    //Mark 1;
  printf("The content of variable a is: %d\n",a);
  printf("The content of variable a is: %d\n", *x);
}
/* output:
* The content of variable a is: -5
* The content of variable a is: -5
*/

// Location X points to variable a. 
// Mark 3, right hand side gets executed. Execution of *x means : start from location x and derefere to the location whose address is in x.
// (which is the address of a) and pick the value of that location ( which is -1).从地址X开始，断开在X里面的地址的关联，取出那个地址里面的数值。然后计算。
//现在相加，地址里的value 就是-5。we have *x = -5.To system this  means:it starts from location x and dereference to the location whose address is in x
// and insert 5 in that location.从地址x开始，与地址x断关联，插入-5到这个地址。
