#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
};

// brute approach
// int calcHeight(Node* root)
// {
//     if(root == NULL)
//     {
//         return 0;
//     }

//     return max(calcHeight(root->left), calcHeight(root->right)) + 1;
// }

// int calcDiameter(Node* root)
// {

//     if(root == NULL)
//     {
//         return 0;
//     }
//     int lHeight = calcHeight(root->left);
//     int rHeight = calcHeight(root->right);

//     int currDiameter = lHeight + rHeight + 1;

//     int Ldiameter = calcDiameter(root->left);
//     int Rdiameter = calcDiameter(root->right);

//     return max(currDiameter, max(Ldiameter, Rdiameter));
// }

//optimal approach

int calcDiameter(Node* root, int* height)
{
    if(root == NULL)
    {
        *height = 0;  
        return 0;
    }
    int lh = 0, rh = 0;
    int lDiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);

    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int height = 0;
    cout << calcDiameter(root, &height) << endl;

    return 0;
}