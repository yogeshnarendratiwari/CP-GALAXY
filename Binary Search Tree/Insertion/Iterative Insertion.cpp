#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} *root = NULL;


void insert(int key)
{

    struct Node *t = root;
    struct Node *p, *r;
   

    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->left = NULL;
        p->right = NULL;
        root = p;
        return;
    }

    while (t != NULL)
    {
        r = t;
         if (t->data == key)
        return;
        else if (t->data > key)
            t = t->left;
        else
            t = t->right;
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->left = NULL;
    p->right = NULL;

    if (r->data > p->data)
        r->left = p;
    else
        r->right = p;
}

void Inorder(struct Node *p){
    if(p){
        Inorder(p->left);
        cout<<p->data<<" ";
        Inorder(p->right);
    }
}

int main()
{

    insert(15);
    insert(5);
    insert(20);
    insert(16);
    insert(8);
    insert(12);
    insert(3);
    insert(6);

    Inorder(root);
}