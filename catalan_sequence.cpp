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

//application
vector<node*> ConstructTrees(int start, int end)
{
    vector<node*> trees;

    if(start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for(int i = start; i <= end; i++)
    {
        vector<node*> leftsubtrees = ConstructTrees(start, i - 1);
        vector<node*> rightsubtrees = ConstructTrees(i + 1, end);

        for(int j = 0; j < leftsubtrees.size(); j++)
        {
            node* left = leftsubtrees[j];
            for(int k = 0; k < rightsubtrees.size(); k++)
            {
                node* right = rightsubtrees[k];
                node* Node = new node(i);
                Node->left = left;
                Node->right = right;
                trees.push_back(Node);
            } 
        }
    }

    return trees;
}

void preorderPrint(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    cout << root->data << " ";

    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main()
{
    vector<node*> totalTrees = ConstructTrees(1, 3);

    for(int i = 0; i < totalTrees.size(); i++)
    {
        cout << i+1 << " : ";
        preorderPrint(totalTrees[i]);
        cout << endl;
    } 

    return 0;
}