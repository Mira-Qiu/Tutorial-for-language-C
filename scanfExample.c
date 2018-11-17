#include<stdio.h>

int main()
{
    char a;
    int m;
    float x;
    
    printf("Enter a letter, a integer, a decimal number all in one line and separated by spaces:");
    scanf("%c%d%f",&a,&m,&x);
    printf("You entered:\n%c\n%d\n%f",a,m,x);
    return 0;
}
