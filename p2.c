#include<stdio.h>

int main() {
	printf("%d",test(52));
}

int test(int n) {
	const int x = 51;
	if (n > x)
	{
		return (n - x) * 3;
	}
	return x - n;
}

/*
*  Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
*/
