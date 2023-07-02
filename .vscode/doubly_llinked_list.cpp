#include <bits/stdc++.h>
using namespace std;
class node
{
    public :
        int data;
        node* next;
        node* previous;
        node(int val)
        {
            data = val;
            next = NULL;
            previous = NULL;
        }
};
void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    if(head != NULL)
    {
        head->previous = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val)
{
    if(head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->previous = temp;
}

void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;
    head->previous = NULL;
    delete todelete; 
}

void deletion(node* &head , int pos)
{
    if(pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    int count = 1;
    while(temp != NULL && count != pos)
    {
        temp = temp->next;
        count ++;
    }
    temp->next->previous = temp->previous;
    if(temp->next != NULL)
    {
        temp->previous->next = temp-> next;
    }

    delete temp;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main ()
{   
    node* head = NULL;
    // insertAtHead(head, 0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);

    insertAtHead(head, 0);

    display(head);   

    deleteAtHead(head);
    
    display(head);

    deletion(head, 1);

    display(head);

    return 0;
}