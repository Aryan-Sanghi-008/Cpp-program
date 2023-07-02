#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define lli long long int

class ListNode
{
public:
    ListNode *next;
    int val;
    ListNode(int data)
    {
        next = NULL;
        val = data;
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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

    int carry = 0, first, second;
    ListNode *head = new ListNode(0), *tail = head;
    while (l1 || l2 || carry)
    {
        if (l1)
        {
            first = l1->val;
            l1 = l1->next;
        }
        else
        {
            first = 0;
        }

        if (l2)
        {
            second = l2->val;
            l2 = l2->next;
        }
        else
        {
            second = 0;
        }

        int temp = first + second + carry;
        tail->next = new ListNode(temp % 10);
        tail = tail->next;
        carry = temp / 10;
    }
    return head->next;
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
    insertAtHead(head, 9);
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 2);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    display(head);

    return 0;
}