#include<stdio.h>

int main()
{
	int a[]={9,8,5,4,1,2,6}, i ,j, temp;
	for(i = 1; i < sizeof(a)/sizeof(a[0]); i++)
		for ( j =0 ; j < sizeof(a)/sizeof(a[0]) - 1; j++)
		{
			if (a[j] >a[j+1])
			{	
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	
	for(i = 0; i < sizeof(a)/sizeof(a[0]);i++)
	printf("%d ",a[i]);
	printf("\n");					
				
	return 0;
}	
