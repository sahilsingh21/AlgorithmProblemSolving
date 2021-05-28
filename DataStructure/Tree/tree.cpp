#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;

        left = NULL;
        right = NULL;
    }
};

void Preoder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }

    cout << node->data << endl;
    Preoder(node->left);
    Preoder(node->right);
}

void Inoder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }

    Inoder(node->left);
    cout << node->data << endl;
    Inoder(node->right);
}

void Postoder(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }

    Postoder(node->left);
    Postoder(node->right);
    cout << node->data << endl;
}

int main()
{
    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    cout << "Preorder Traversal" << endl;
    Preoder(root);
    cout << endl
         << endl
         << "Inorder Traversal" << endl;
    Inoder(root);
    cout << endl
         << endl
         << "Postorder Traversal" << endl;
    Postoder(root);

    return 0;
}