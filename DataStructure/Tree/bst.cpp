#include <iostream>

using namespace std;

struct Node
{
    int key;
    struct Node *left, *right;
};

struct Node *newNode(int item)
{
    struct Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;

    return temp;
}

struct Node *insert(struct Node *root, int key)
{

    if (root == NULL)
    {
        return newNode(key);
    }

    if (key < root->key)
    {
        root->left = insert(root->left, key);
    }

    if (key > root->key)
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void Inorder(struct Node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout << root->key << " ";
        Inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    Inorder(root);

    return 0;
}