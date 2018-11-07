#include <stdio.h>

int main()
{
	int i, j,n;
	for (i = 0; i < 7; i++) {
	  for (j = 0; j < i; j++)
		  printf("*");
	  printf("\n");
	}
	for (i = 7; i > 0; i--) {
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

/*
**
**
***
****
*****
******
*******
******
*****
****
***
**
*
*/
