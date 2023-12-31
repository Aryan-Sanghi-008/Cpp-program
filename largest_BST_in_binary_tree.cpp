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

class info
{
    public :
        int size;
        int max;
        int min;
        int ans;
        bool isBST;
};

info largestBSTinBT(node* root)
{
    if(root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }

    if(root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    info leftInfo = largestBSTinBT(root->left);
    info rightInfo = largestBSTinBT(root->right);

    info curr;
    curr.size = (1 + leftInfo.size + rightInfo.size);

    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min > root->data)
    {
        curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;

}

int main()
{
    /*
         15
        /  \
        10  30
        /
        5
    */
    node* root = new node(15);
    root->left = new node(10);   
    root->right = new node(30);
    root->left->left = new node(5);

    cout << "Largest BST in BT : " << largestBSTinBT(root).ans << endl;   

    return 0;
}