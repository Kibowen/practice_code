#include "node.h"

int main ()
{
	//This is creating the first node and its reference.

	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	node_prompt(head);

	/**add_at_end(head, 98);
	add_at_end(head, 40);
	add_at_end(head, 20);
	add_at_end(head, 67);
	add_at_end(head, 80);
	add_at_end(head, 3);
	add_at_end(head, 200);
	add_at_end(head, 20);
	add_at_end(head, 40);
	add_at_end(head, 200);*/

	
	head = add_beg(head, 3);
	head = add_beg(head, 12);
	
	print_data(head);
	return 0;

}
