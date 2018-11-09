#include<stdio.h>

int main() {
	printf("%d",test(23,32));
}

int test(int a, int b) {
	
	return a == 30 || b == 30 || a + b == 30;
	
}


/*
*  Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
*/
