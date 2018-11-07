#include<stdio.h>

int main()
{
	int d, m, h, s;
	printf("Enter a numbere for second: \n");
	scanf_s("%d", &s);
	d = s / (24 * 60 * 60);
	h = s / (60 * 60) - d * 24;
	m = s / 60 - d * 24 * 60 - h * 60;
	s = s - d * 60 * 60 * 24 - h * 60 * 60 - m * 60;
	printf("Days: %d; Hours: %d; Minutes:%d; Second: %d", d, h, m, s);
}

/*
*  Write a program to convert a number of seconds to days, minutes, hours and seconds.
*/
