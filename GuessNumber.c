#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guess();
int main()
{
	//Do not change this function
	int guessingNumber, userNumber;
  
  srand((unsigned)time(NULL));
	guessingNumber = rand() % 101;
	printf("The guessing number is between 0 and 100.\n");
	userNumber = guess();
	while(userNumber != guessingNumber)
            {
		if(userNumber < guessingNumber)
		printf("Too low\n");
		else
		printf("Too high\n");
		userNumber = guess();
	}
	printf("Yes the guessing number is: %d\n", userNumber);
	return 0;
}

int guess()
{
	//Complete this function
	int n;
	scanf("%d",&n);
	return n;
}
