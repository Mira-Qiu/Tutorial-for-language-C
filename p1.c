#include<stdio.h>

int main() {
	printf("%d", test(1, 2));
	printf("%d", test(2, 2));
	return 0;
}

int test(int a, int b) {
	return a == b ? 3 * (a + b) : (a + b);
}

/*
* Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum
*/
