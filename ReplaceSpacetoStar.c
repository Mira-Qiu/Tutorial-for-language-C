#include <stdio.h>
#include <string.h>
void display(char x[], char y);
int main()
{
	//Do not change this function
	char a[1000];
	printf("Enter a sentence\n");
	fgets(a,sizeof(a),stdin);
	display(a, '-');
	display(a, '*');		
	display(a, '+');		
	return 0;
}

void display(char x[], char y)
{
	//Complete this function. You may need strlen
	int l,j, i= 0, n = 0;
	l = strlen(x);
	
	while(x[i] != '\0')
	{
		if(x[i]==' ')
		x[i]=y;
		i++;
	}
	for(j = 0;j <l; j++)
		printf("%c",x[j]);

	while(x[n]!='\0')
	{
		if(x[n] == y)
		x[n] =' ';
		n++;
	}
}
