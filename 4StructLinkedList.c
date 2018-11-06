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
    newNode =(Rec*)malloc(sizeof(Rec)); //Right hand: allocates space with the size of the struct and returns its address.
    newNode ->key = i; // dereferences, access the location of the key and inserts the value into this location
    newNode ->next = head; //dereferences, access the location of the variables next and inserts the value;
    head = newNode; //Inserts the content of newNode to the head location. newNode and head point to the same location
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
