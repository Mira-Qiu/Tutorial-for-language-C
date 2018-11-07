#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int value;
  struct Node* next;
} Rec;

int main()
{
  Rec *p, *q;
  p = (Rec*)malloc(sizeof(Rec));
  q = (Rec*)malloc(sizeof(Rec));
  p->value = -12;
  p->next = NULL;
  q->value = 25;
  q->next = NULL;		//Mark 1
  q = p;				//Mark 2
  printf("%d\n", p->value);
  printf("%d\n", q->value);
     return 0;
}

/* The output of this program is:
*  -12
*  -12
*/
