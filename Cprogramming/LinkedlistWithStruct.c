#include <stdio.h>
#include <stdlib.h>

//	Uncomplete mess.

typedef struct rider
{
	int backNo;
	int hour;
	int min;
	int sec;
}RIDER;

typedef struct LinkedListNode
{
	struct LinkedListNode* next;
	RIDER* data;
}LinkedListNode;

RIDER* create_rider(int no, int h, int m, int s)
{
	RIDER* created= calloc(1, sizeof(RIDER));
	created->backNo= no;
	created->hour= h;
	created->min= m;
	created->sec= s;
	return created;
}



int main()
{
  //method call
	return 0;
}

//	Everything after here is taken from my Linked List library

LinkedListNode* ll_create_node(RIDER* input_data)
{
	LinkedListNode* created = calloc(1, sizeof(LinkedListNode));
	created->data = input_data;
	created->next = NULL;
	return created;
}

void ll_delete_next(LinkedListNode* curr)
{
	LinkedListNode* temp = curr->next;
	curr->next = temp->next;
	free(temp);
}

void ll_add_last(LinkedListNode* head, LinkedListNode* addon)
{
	LinkedListNode* curr = head;
	while ( curr->next != NULL )		{	curr = curr->next;	 }
	curr->next = addon;
}
