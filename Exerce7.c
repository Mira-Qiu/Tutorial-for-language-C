#include<stdio.h>

int main()
{
	double p, l, t, total;
	t = 1.03;
	printf("Enter Parts fee:");
	scanf_s("%lf", &p);
	printf("Enter Labor fee:");
	scanf_s("%lf", &l);
	total = (p + l)*t;
	printf("Total is : %lf", total);
	return 0;
}
