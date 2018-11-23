#include<stdio.h>
#include<stdarg.h>

void print(int arg, ...) {
	va_list ap;
	int i,k;
	va_start(ap, arg);
	for (i = arg; i > 0; i--)
	{
		k = va_arg(ap, int);
		printf("%d ", k);
	}
	va_end(ap);
	printf("\n");
}

int main() {
	print(8, 5, 2, 14, 84, 97, 15, 24, 48);
	print(2, 84, 51);
	return 0;
}

//Below is the example which had been mentioned at README file.

#include <stdio.h>
#include <stdarg.h>

void print(int arg, ...){
  va_list ap;
  int i;
  va_start(ap, arg); 
  for (i = arg; i >= 0; i = va_arg(ap, int))
    printf("%d ", i);
   va_end(ap);
   printf("\n");
}

int main(void){
  print(5, 2, 14, 84, 97, 15, 24, 48, -1);
  print(84, 51, -1);
  print(-1);
  print(1, -1);
  return 0;
}
