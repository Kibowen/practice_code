#include <stdio.h>
#include <stdlib.h>

// this creates the structure of a node.
struct node
{
    int data; //stores the data type of the node. it is also the first part of the node.
    struct node *link; // the second part of the link that will be used to link.
};

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

/**
 * @brief 
 * add_at_end - adds a node at the end of the linked list.
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

int main ()
{
    //This is creating the first node and its reference.
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    printf("data in head:%d\n", head->data);
    head->link = NULL;
    //printf("the link address:%p\n", &head->link);

    //this is the creation of the second node
    struct node *current = malloc(sizeof(struct node));
    printf("the link address:%p\n", &head->link);
    current->data = 98;
    printf("data in current:%d\n", current->data);
    current->link = NULL;
    //the line below links the two nodes.
    head->link = current;
    printf("the link address:%p\n", &current->link);

    /**
    //this is the creation of the third node
    struct node *tomato = malloc(sizeof(struct node));
    tomato->data = 200;
    tomato->link = NULL;
    //the line below links the two nodes.
    current->link = tomato;
    */

    //this is the creation of the 4th node
    current = malloc(sizeof(struct node));
    current->data = 40;
    printf("data in current2:%d\n", current->data);
    current->link = NULL;
    //the line below links the two nodes.
    head->link->link = current;
    printf("the link address:%p\n", &head->link->link);
    
    //printf("data in tomato:%d\n", tomato->data);
    //printf("the link address:%p", tomato->link);

    add_at_end(head, 67);
    add_at_end(head, 80);
    add_at_end(head, 3);
    add_at_end(head, 200);

    print_data(head);

    return 0;

}