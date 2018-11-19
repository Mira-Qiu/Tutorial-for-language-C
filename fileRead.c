
#include<stdio.h>

int main()
{
    FILE *myfile;
    int x;
    myfile = fopen("a.txt", "r");
    fscanf(myfile, "%d",&x);
    printf("%d",x);
    fclose(myfile);
    
    return 0;
}
