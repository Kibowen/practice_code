#include "node.h"

/**
 * print_data - prints the data in the linked list.
 * 
 * @head: - is a pointer that holds the first value 
 */


void print_data(struct node *head)
{
	if (head == NULL)
		printf("linked list is empty");
	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL)
	{
		printf("%d \n", ptr->data);
		ptr = ptr->link;
	}
}
