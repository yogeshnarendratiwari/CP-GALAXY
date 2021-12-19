#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} *root = NULL;

Node *insert(Node *p, int key)
{
    Node *t;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->left = NULL;
        t->right = NULL;
        return t;
    }

    if (p->data < key)
        p->right = insert(p->right, key);
    else if (p->data > key)
        p->left = insert(p->left, key);
    return p;
}

void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->left);
        cout << p->data << " ";
        Inorder(p->right);
    }
}

int main()
{

   root =  insert(root,15);
    insert(root,5);
    insert(root,20);
    insert(root,16);
    insert(root,8);
    insert(root,12);
    insert(root,3);
    insert(root,6);

    Inorder(root);
}