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

bool isIdenticalBST(node* root1, node* root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }

    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }

    else
    {
        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdenticalBST(root1->left, root2->left);
        bool cond3 = isIdenticalBST(root1->right, root2->right);

        if(cond1 && cond2 && cond3)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

int main()
{
    node* root = new node(4);
    root->left = new node(2);
    root->right = new node(5);

    root->left->left = new node(1);
    root->left->right = new node(3);

    root->right->right = new node(6);

    node* root1 = new node(4);
    root1->left = new node(2);
    root1->right = new node(5);

    root1->left->left = new node(1);
    root1->left->right = new node(3);

    root->right->right = new node(6);

    if(isIdenticalBST(root, root1))
    {
        cout << "Identical BST" << endl;
    }
    else
    {
        cout << "Non Identical BST" << endl;
    }

    return 0;
}