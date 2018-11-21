#include<stdio.h>

int main()
{
	int a[] = {1,5,8,9,-9,6,-5,-78,56,78,44},i;
	for ( i =7 ;i<11;i++)
		a[i] = a[i+1];
	for(i = 0; i<10; i++)
	printf("%d ",a[i]);
	
	return 0;
}
