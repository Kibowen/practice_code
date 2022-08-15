#include "node.h"
    
void node_prompt(struct node *head)
{

    int i;
	int a;

	printf("value: ");
	scanf("%d", &a);
	printf("type position:\n1-beginning\n2-end\n:");
	scanf("%d", &i);

	switch(i)
	{
		case 1:
		add_beg(head, a);
		break;

		case 2:
		add_at_end(head, a);
		break;

		default:
		printf("invalid position.\n");
	}


}