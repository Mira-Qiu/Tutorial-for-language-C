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

