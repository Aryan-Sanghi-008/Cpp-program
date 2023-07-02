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

int maxPathSumUtil(Node* root, int &ans)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);

    int nodemax = max(max(root->data, root->data + left + right), 
    max(root->data + left, root->data + right));

    ans = max(ans, nodemax);

    int singlePathmax = max(root->data, max(root->data + left, root->data + right));

    return singlePathmax;
}

int max_path_sum(Node* root)
{
    int ans = INT_MIN;

    maxPathSumUtil(root, ans);

    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(-12);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right= new Node(- 6);
    // root->right->left->left = new Node(7);

    cout << max_path_sum(root) << endl;

    return 0;
}