#include<stdio.h>

void func(char* (*f)());

char* print(){
    return "Hello World\n";
}

void func(char* (*f)()){
    printf("%s\n",(*f)());
}
int main()
{
    func(print);
    return 0;
}
