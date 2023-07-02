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


node* insertBST(node* root, int val)
{
    if(root == NULL)
    {
        return new node(val);
    }
    if(root->data > val)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
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
    node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);   
    insertBST(root, 3);   
    insertBST(root, 4);   
    insertBST(root, 2);   
    insertBST(root, 7);

    inorderPrint(root);

    return 0;
}