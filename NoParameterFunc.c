#include<stdio.h>

void func(void (*f)());
void print()
{
   pritf("Hello world\n");
}
void func(void (*f)())
{
  (*f)();
}
int main()
{
  func(print);
  return 0;
}


/*
*  When we pass f to func we pass it as a pointer. This means the pointer points the beginning of the body of f;
*  When we call fun we should dereferences for f. That is "*f" is passed;
*/
