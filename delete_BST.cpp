#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *left;
        node *right;

        node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
};

node* inorderSucc(node* root)
{
    node* curr = root;
    while(curr && curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr;
}

node* deleteBST(node* root, int key)
{ 

    if(root->data > key)
    {
        root->left = deleteBST(root->left, key);
    }   

    else if(root->data < key)
    {
        root->right = deleteBST(root->right, key);
    }
    else
    {
        if(root->left == NULL)
        {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            node* temp = root->left;
            free(root);
            return temp;
        }

        node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }

    return root;

}

void inorderPrint(node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main()
{
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);

    root->left->left = new node(1);
    root->left->right = new node(3);

    root->right->right = new node(6);

    inorderPrint(root);
    cout << endl;

    deleteBST(root, 2);

    inorderPrint(root);
    cout << endl;

    return 0;
}