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

struct Node* Search (struct Node * t , int key){
     
 if(t==NULL)
 return NULL;
 
 if(t->data = key)
 return t;
 else if(key>t->data)
 Search(t->right,key);
 else
 Search(t->left,key);

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

   cout<<Search(root,8);
}