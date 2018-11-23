#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
  int key;
  struct Node* next;
} Rec;

int main()
{
  Rec *newNode, *head,*temp;
  int i, k;
  
  head = NULL;
  for(i = 7; i > =1 ; i = i - 2)
  {
    newNode =(Rec*)malloc(sizeof(Rec)); 
    newNode ->key = i; 
    newNode ->next = head;
    head = newNode; 
   }
   
   temp = head;
   while( temp != NULL)
   {
    k = temp -> key;
    temp = temp ->next;
    printf("%d",k);
   }
   printf("\n");
   return 0;
 }
