#include <stdio.h>
int f(int x);
int main()
{
  //Do not change this function
        int n, k;

        printf("How many things? ");
        scanf("%d", &n);
        printf("How many at a time? ");
        scanf("%d", &k);
        printf("Number of possible combination is: %d\n", f(n)/(f(k) * f(n - k)));
        return 0;
}

int f(int x)
{
	//Complete this function. Return the result of 1 * 2 * ...* x
	int i, sum = 1;
	for( i = 1; i <=x; i++)
		sum *= i;
	return sum;
}
