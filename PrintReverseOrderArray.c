#include<stdio.h>

int main()
{
	int x,b,i,n;
	FILE *infile;
	int a[1000];
	
	infile = fopen("a","r");
	b = fscanf(infile,"%d",&x);
	while(b != -1)
	{
		a[n] = x;
		b = fscanf(infile,"%d",&x);
		n++;
	}
	for( i = n - 1 ; i >0; i--)
		printf("%d ",a[i]);
	fclose(infile);
	printf("\n");
	return 0;
}
