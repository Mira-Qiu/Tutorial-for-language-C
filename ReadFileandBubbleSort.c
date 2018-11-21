#include<stdio.h>

int main()
{
	int  i ,j,n,b,count;
	float a[1000],x, temp;
	FILE *infile;
	printf("Enter a number to input:\n");
	scanf("%d",&n);
	infile= fopen("a","r");
	b = fscanf(infile,"%f",&x);
	while(b != -1 && count <= n)
	{
		a[count] = x;
		b = fscanf(infile,"%f",&x);
		count++;
	}

	for(i = 1; i < n; i++)
		for ( j =0 ; j < n - 1; j++)
		{
			if (a[j] >a[j+1])
			{	
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	
	for(i = 0; i < n;i++)
	printf("%.2f ",a[i]);
	printf("\n");
	fclose(infile);					
				
	return 0;
}	
