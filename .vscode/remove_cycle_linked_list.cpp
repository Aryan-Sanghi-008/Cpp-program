#include <bits/stdc++.h>
using namespace std;
class node
{
    public :
        node* next;
        int data;
        node(int val)
        {
            next = NULL;
            data = val;
        }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    node* n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void makecycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next != NULL)
    {
        if(count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count ++;
    }

    temp->next = startNode;
}

bool detect_cycle(node* &head)
{
    node* fast = head;
    node* slow = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

void remove_Cycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while(fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
    
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main ()
{
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    makecycle(head , 3);
    // display(head);
    cout << detect_cycle(head) << endl;
    remove_Cycle(head);
    cout << detect_cycle(head) << endl;
    display(head);
    return 0;
}