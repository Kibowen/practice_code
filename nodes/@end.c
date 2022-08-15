#include "node.h"

/**
 * @brief adds a node at the end of the linked list.
 * @param head pointer that holds the address of the new data
 * @param data is the actual data of the node
 */
void add_at_end(struct node *head, int data)
{
	struct node *ptr, *temp;
	ptr = head;
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
}
