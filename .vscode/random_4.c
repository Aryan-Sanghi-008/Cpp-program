#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};


//Traversing Circular Linked Lists 

void Traversal(struct node* head)
{
    struct node *p = head;
    printf("The Element is %d\n", p->data);
    p = p->next;
    while(p!=head)
    {
        printf("The Element is %d\n", p->data);
        p=p->next;
    }
}

//Insertion of element at first index
struct node * InsertAtFirst(struct node *head, int data)
{
    struct node *p = (struct node *)malloc(sizeof(struct node *));
    p->data = data;

    struct node * q = head->next;
    while(q->next!=head)
    {
        q=q->next;
    }
    q->next=p;
    p->next=head;
    head=p;
    return head;
}



//Circular linked list
int main()
{
    struct node *head;
    struct node *Second;
    struct node *Third;
    struct node *Fourth;

    // allocation of memory in heap
    head = (struct node *)malloc(sizeof(struct node));
    Second = (struct node *)malloc(sizeof(struct node));
    Third = (struct node *)malloc(sizeof(struct node));
    Fourth = (struct node *)malloc(sizeof(struct node));

    // linking first and second nodes
    head->data = 1;
    head->next = Second;

    // linking Second and third nodes
    Second->data = 5;
    Second->next = Third;

    // linking third and Fourth nodes
    Third->data = 9;
    Third->next = Fourth;

    // ending
    Fourth->data = 15;
    Fourth->next = head; 

    printf("Elements before insertion\n");
    Traversal(head);

    InsertAtFirst(head, 27);
    printf("Elements after insertion\n");
    Traversal(head);
    return 0;
}