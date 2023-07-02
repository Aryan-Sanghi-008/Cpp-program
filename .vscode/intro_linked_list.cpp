#include <iostream>
using namespace std;

class ListNode
{
    public:
        ListNode *next;
        int val;
        ListNode(int data)
        {
            val = data;
            next = NULL;
        }
};

void insertAtHead(ListNode *&head, int data)
{
    ListNode *n = new ListNode(data);
    n->next = head;
    head = n;
}

void insertAtTail(ListNode *&head, int data)
{
    ListNode *n = new ListNode(data);

    if (head == NULL)
    {
        head = n;
        return;
    }
    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
bool search(ListNode *head, int key)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        if (temp->val == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    ListNode *head = NULL;
    insertAtHead(head, 4);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    cout << search(head, 2) << endl;
    cout << search(head, 5) << endl;

    return 0;
}