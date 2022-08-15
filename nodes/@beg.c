#include "node.h"

/**
 * @brief adds data at the beginning of the linked list.
 * 
 * @param head the address of the first pointer
 * @param d assigned to the data being added.
 * @return struct node* 
 */
struct node* add_beg(struct node* head, int d)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link = NULL;

	ptr->link = head;
	head = ptr;
	return head;
}
