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


/*     rand()和srand()要一起使用，其中srand()用来初始化随机数种子,rand()用来产生随机数。
 *     因为默认情况下随机数种子为1，而相同的随机数种子产生的随机数是一样的,失去了随机性的意义，
 *     所以为使每次得到的随机数不一样，用函数srand()初始化随机数种子。srand()的参数，用time函数值（即当前时间），
 * /   因为两次调用rand()函数的时间通常是不同的，这样就可以保证随机性了。
