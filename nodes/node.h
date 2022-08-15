#include <stdio.h>
#include <stdlib.h>

/**
 * @brief the node.
 * @data: stores the data type of the node. it is also the first part of the node.
 * @link: the second part of the link that will be used to link.
 */
struct node
{
	int data;
	struct node *link;
};


void print_data(struct node *head);
void add_at_end(struct node *head, int data);
struct node* add_beg(struct node* head, int d);
void node_prompt(struct node *head);
