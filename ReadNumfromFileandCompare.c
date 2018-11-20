#include<stdio.h>

int main()
{
	float x,a,n, avg;
	int count;
	FILE *infile;
	//int b[1000];

	printf("Enter a number:\n");
	scanf("%f",&n);
	
	infile = fopen("a","r");
	a = fscanf(infile,"%f",&x);
	while(a != -1)
	{
		n += x;
		a = fscanf(infile,"%f",&x);
		count++;
	}
	
	avg = n / count;
	printf("The average is : %f\n",avg);
	fclose(infile);
	
	infile = fopen("a","r");
	a = fscanf(infile,"%f",&x);
	while(a != -1)
	{
		x > avg? printf("%f: Above the average\n",x):x == avg?printf("%f: Same as average\n",x) : printf("%f: Below average\n",x);
		a = fscanf(infile,"%f",&x);
	}
	printf("\n");
	fclose(infile);
	return 0;
}
