#include<stdio.h>

int main()
{
	int n,m,i,a, count = 0 ;
	float x, newf;
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
	
	printf("Enter a integer number rank for new and a double number for insert:\n");
	scanf("%d %f",&m,&newf);
	
	if( n < m)
		printf("Wrong number!\n");
	else{
		for( i = n; i > n-m; i--)
			b[i+1] = b[i];
		b[m-1] = newf;
		for(i = 0 ;i < n + 1; i++)
		printf("%.2f ",b[i]);
	}
	printf("\n");
	fclose(infile);
	return 0;
}	

/*The program reads a positive number (maximum 100) for n and n decimal numbers from an input file named a.txt. The program then reads a positive number for m and a decimal number for x. The program inserts the value of x in subscript mth. 
*For example if the content of the input file is:
*10
*9.5	2.3	8.5	3	4.5	-3.7		5	-2.5	12	-2
*5	123.45
*The following list should be displayed:
*9.5	2.3	8.5	3	4.5	123.45		5	-2.5	12	-2
*/
