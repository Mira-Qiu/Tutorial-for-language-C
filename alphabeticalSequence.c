#include <stdio.h>
#include <string.h>
void smallest(char wordx[], char wordy[]);
int main()
{
	//Do not change this function
	char word1[100], word2[100], word3[100];
      printf("Enter the first word: ");
	gets(word1);
      printf("Enter the second word: ");
	gets(word2);
      printf("Enter the third word: ");
	gets(word3);
      	smallest(word1,word2);
	smallest(word1, word3);
	smallest(word2, word3);
	printf("%s\n%s\n%s\n", word1, word2, word3);
	return 0;
}

void smallest(char wordx[], char wordy[])
{
  //Complete this function. 
  //This function puts the smaller word in wordx. Therefore on return wordx
  //is smaller than wordy.
  //You need the buit-in functions srcmp and strcpy. Also look at the
  //function swap
	char temp[1000];
	int a;
	a = strcmp(wordx,wordy) ;
	if (a>0)
 	{
		strcpy(temp,wordx);
		strcpy(wordx,wordy);
		strcpy(wordy,temp);
	}
	
}
