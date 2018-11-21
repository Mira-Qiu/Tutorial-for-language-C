#include<stdio.h>

int main()
{
	int n,m,i,a, count = 0 ;
	float x;
	FILE *infile;
	float b[100];

	printf( "Enter a input token number: \n");
	scanf("%d",&n);
	infile = fopen("a","r");
	a = fscanf(infile,"%f",&x);
	while(a != -1 && count <= n)
	{
		b[count] = x;
		a = fscanf(infile,"%f",&x);
		count++;
	}
	
	printf("Enter a number rank for delect:\n");
	scanf("%d",&m);
	if( n < m)
		printf("Wrong number!\n");
	else{
		for( i = m; i < n; i++)
			b[i] = b[i+1];
		for(i = 0 ;i < n-1; i++)
		printf("%.2f ",b[i]);
	}
	printf("\n");
	fclose(infile);
	return 0;
}	

/*
* The program reads a positive number (maximum 100) for n and n decimal numbers from an input file named a.txt. The program then reads a positive number for m. The program removes the mth element (which is in subscript m-1). The program displays the array.
* For example if the content of the input file is:
* 10
* 9.5	2.3	8.5	3	4.5	-3.7	5	-2.5	12	-2	6.5
* 5
* The following list should be displayed:
* 9.50    2.30    8.50    3.00    -3.70   66.00   -2.50   12.00   -2.00   6.50
* /
