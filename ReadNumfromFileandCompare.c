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


/*
* update edition
*/

#include<stdio.h>

int main()
{
	int x,b,i,n, sum,enternumber;
	float avg;
	FILE *infile;
	int a[1000];
	
	printf("Enter a number: \n");
	scanf("%d",&enternumber);
	
	infile = fopen("a","r");
	b = fscanf(infile,"%d",&x);
	while(b != -1)
	{
		a[n] = x;
		b = fscanf(infile,"%d",&x);
		n++;
		sum += x;
	}

	avg = sum/(n -1);
	
	for( i = n - 1 ; i >0; i--)
	{
		a[i] > avg ? printf("%d : Above the average.\n",a[i]) : a[i] == avg? printf("%d : same as average.\n",a[i]) :printf("%d : Below the average.\n",a[i]);
	}
		
	fclose(infile);
	printf("\n");
	return 0;
}
